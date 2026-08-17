class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1 =0;

        int cur =0;
        for(int i : nums){
            if(i == 1){
                cur++;
            }else{
                max1 = max(max1, cur);
                cur =0;
            }
        }
        return max(cur, max1);
    }
};