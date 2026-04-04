const int INF = 1e9;

template <typename T>
inline void change_min(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

class Solution {
 public:
  int connectTwoGroups(vector<vector<int>>& cost) {
    int N1 = cost.size();
    int N2 = cost[0].size();

    vector<int> min_cost_from_two(N2, INF);

    for (int i1 = 0; i1 < N1; ++i1) {
      for (int i2 = 0; i2 < N2; ++i2) {
        change_min(min_cost_from_two[i2], cost[i1][i2]);
      }
    }

    vector<int> dp(1 << N2, INF);
    dp[0] = 0;

    for (int i1 = 0; i1 < N1; ++i1) {
      vector<int> next_dp(1 << N2, INF);

      for (int bit = 0; bit < 1 << N2; ++bit) {
        for (int i2 = 0; i2 < N2; ++i2) {
          change_min(next_dp[bit | (1 << i2)], dp[bit] + cost[i1][i2]);
        }
      }

      swap(dp, next_dp);
    }

    int res = INF;

    for (int bit = 0; bit < 1 << N2; ++bit) {
      int r = dp[bit];

      for (int i2 = 0; i2 < N2; ++i2) {
        if ((bit & (1 << i2)) == 0) {
          r += min_cost_from_two[i2];
        }
      }

      change_min(res, r);
    }

    return res;
  }
};
