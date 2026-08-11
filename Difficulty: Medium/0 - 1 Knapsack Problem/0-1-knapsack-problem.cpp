class Solution {
public:
    int dp[1001][1001];

    int knapsack(int W, vector<int>& val, vector<int>& wt) {
        int n = wt.size();

        memset(dp, -1, sizeof(dp));

        return ks(W, val, wt, n);
    }

    int ks(int W, vector<int>& val, vector<int>& wt, int n) {

        if (n == 0 || W == 0)
            return 0;

        if (dp[n][W] != -1)
            return dp[n][W];

        if (wt[n - 1] <= W) {
            return dp[n][W] = max(
                val[n - 1] + ks(W - wt[n - 1], val, wt, n - 1),
                ks(W, val, wt, n - 1)
            );
        }

        return dp[n][W] = ks(W, val, wt, n - 1);
    }
};