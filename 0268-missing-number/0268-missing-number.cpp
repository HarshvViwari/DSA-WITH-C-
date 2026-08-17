class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i =0;
        sort(nums.begin(), nums.end());

        for(int x : nums){
            if(x == i){
                i++;
            }else{
                return i;
            }
        }
        return i;
    }
};