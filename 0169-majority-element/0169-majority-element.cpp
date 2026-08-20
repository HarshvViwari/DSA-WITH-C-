class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans =-1;
        unordered_map<int,int>mp;

        for(int i : nums){
            mp[i]++;

            if(mp[i] > nums.size()/2) ans =i;
        }

        return ans;
    }
};