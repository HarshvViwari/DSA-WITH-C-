class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i=0, j;
        int maxgap = 0;
        for(j=1; j<n; j++){
            maxgap = max(maxgap, nums[j] - nums[i]);
            i++;
        }

        return maxgap;
    }
};