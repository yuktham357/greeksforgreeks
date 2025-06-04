class Solution {
  public:
    int lcsOf3(string &s1, string &s2, string &s3) {
        int n = s1.size(), m = s2.size(), k = s3.size();
        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(k + 1, 0)));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                for (int l = 1; l <= k; l++) {
                    if (s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[l - 1]) {
                        dp[i][j][l] = dp[i - 1][j - 1][l - 1] + 1;
                    } else {
                        dp[i][j][l] = max({dp[i - 1][j][l], dp[i][j - 1][l], dp[i][j][l - 1]});
                    }
                }
            }
        }

        return dp[n][m][k];
    }
};

