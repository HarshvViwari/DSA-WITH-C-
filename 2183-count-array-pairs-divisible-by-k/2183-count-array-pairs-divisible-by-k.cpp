class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        long long ans = 0;

        for (int num : nums) {
            int g = gcd(num, k);

            for (auto it : mp) {
                if ((1LL * g * it.first) % k == 0)
                    ans += it.second;
            }

            mp[g]++;
        }

        return ans;
    }
};