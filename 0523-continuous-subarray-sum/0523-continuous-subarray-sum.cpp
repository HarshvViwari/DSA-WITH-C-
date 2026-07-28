class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size() < 2) return false;

        unordered_map<int,int>mp;
        mp[0] = -1;

        int csum =0;

        for(int i=0; i<nums.size(); i++){
            csum += nums[i];
            if(k != 0){
                csum = csum%k;
            }

            if(mp.find(csum) != mp.end()){
                if(i - mp[csum] > 1) return true;
            }else{
                mp[csum] = i;
            }
        }
        return false;
    }
};