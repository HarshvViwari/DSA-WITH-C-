class Solution {
public:
    int dp[201][10001];

    bool isSubsetSum(vector<int>& arr, int sum) {
        memset(dp, -1, sizeof(dp));

        return solve(arr, sum, 0);
    }

    bool solve(vector<int>& arr, int sum, int i) {

        // Target achieved
        if(sum == 0)
            return true;

        // Target exceeded
        if(sum < 0)
            return false;

        // No elements left
        if(i >= arr.size())
            return false;

        // Already calculated
        if(dp[i][sum] != -1)
            return dp[i][sum];

        // Take current element
        bool take = solve(arr, sum - arr[i], i + 1);

        // Don't take current element
        bool notTake = solve(arr, sum, i + 1);

        return dp[i][sum] = take || notTake;
    }
};