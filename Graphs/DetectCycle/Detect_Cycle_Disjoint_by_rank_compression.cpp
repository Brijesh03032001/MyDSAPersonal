#include<iostream>
#include<vector>
using namespace std;

/*
    Note : Use Union Find for cycle detection in undirected graph only when
           the edges are given. Else, use BFS or DFS
*/

void addEdge(int u, int v, vector<vector<int>>& edge) {
    edge.push_back({u,v});
}

int find(vector<vector<int>>& subsets, int i)
{
    // find root and make root as parent of i (path compression)
    if (subsets[i][0] != i)
        subsets[i][0] = find(subsets, subsets[i][0]);

    return subsets[i][0];
}

void Union(vector<vector<int>>& subsets, int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    // Attach smaller rank tree under root of high rank tree
    // (Union by Rank)
    if (subsets[xroot][1] < subsets[yroot][1])
        subsets[xroot][0] = yroot;
    else if (subsets[xroot][1] > subsets[yroot][1])
        subsets[yroot][0] = xroot;

    // If ranks are same, then make one as root and increment
    // its rank by one
    else
    {
        subsets[yroot][0] = xroot;
        subsets[xroot][1]++;
    }
}

bool isCycle(vector<vector<int>> edge, int V) {
    vector<vector<int>> subsets(V, vector<int>(2));
    for (int i = 0; i < V; i++) {
        subsets[i][0] = i; // i's parent = i
        subsets[i][1] = 0; // i's rank   = 0
    }

    for(int i = 0; i<edge.size(); i++) {
        int x = find(subsets, edge[i][0]);
        int y = find(subsets, edge[i][1]);

        if(x == y)
            return true;
        Union(subsets, x, y);
    }
    return false;
}

int main() {
    int V = 3, E = 3;
    vector<vector<int>> edge;
    addEdge(0, 1, edge);
    addEdge(1, 2, edge);
    addEdge(0, 2, edge);

    if (isCycle(edge, V))
        cout<<"graph contains cycle";
    else
        cout<<"graph doesn't contain cycle";
    return 0;
}