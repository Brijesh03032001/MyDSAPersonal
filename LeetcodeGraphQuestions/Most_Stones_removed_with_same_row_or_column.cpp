#include <iostream>

#include <iostream>

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll INF = 1e18;

int main()
{

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, M, A, B;
    std::cin >> N >> M >> A >> B;

    std::vector<std::vector<std::pair<int, std::pair<int, int>>>> adj(N + 1);

    for (int i = 0; i < M; ++i)
    {
        int u, v, d, t;
        std::cin >> u >> v >> d >> t;

        adj[u].push_back({v, {d, t}});
        adj[v].push_back({u, {d, t}});
    }

    std::vector<std::vector<ll>> dist(N + 1, std::vector<ll>(2, INF));

    std::priority_queue<std::tuple<ll, int, int>,
                        std::vector<std::tuple<ll, int, int>>,
                        std::greater<std::tuple<ll, int, int>>>
        pq;

    dist[A][0] = 0;
    pq.push({0, A, 0});

    while (!pq.empty())
    {
        auto [current_cost, u, coupon_status] = pq.top();
        pq.pop();

        if (current_cost > dist[u][coupon_status])
        {
            continue;
        }

        for (auto &edge : adj[u])
        {
            int v = edge.first;
            int distance = edge.second.first;
            int toll = edge.second.second;

            if (coupon_status == 0)
            {

                ll new_cost_no_coupon = current_cost + distance + toll;
                if (new_cost_no_coupon < dist[v][0])
                {
                    dist[v][0] = new_cost_no_coupon;
                    pq.push({new_cost_no_coupon, v, 0});
                }

                ll new_cost_with_coupon = current_cost + distance;
                if (new_cost_with_coupon < dist[v][1])
                {
                    dist[v][1] = new_cost_with_coupon;
                    pq.push({new_cost_with_coupon, v, 1});
                }
            }

            else
            {
                ll new_cost = current_cost + distance + toll;
                if (new_cost < dist[v][1])
                {
                    dist[v][1] = new_cost;
                    pq.push({new_cost, v, 1});
                }
            }
        }
    }

    ll final_cost = std::min(dist[B][0], dist[B][1]);

    std::cout << final_cost << std::endl;

    return 0;
}