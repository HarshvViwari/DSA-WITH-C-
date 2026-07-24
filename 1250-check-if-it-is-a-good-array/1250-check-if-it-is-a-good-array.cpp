class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int n= nums.size();

        if(1 % nums[0] == 0){
            return 1;
        }

        int hcf = nums[0];

        for(int i=1; i<n; i++){
            if(1 % gcd(hcf,nums[i]) == 0) return 1;

            hcf = gcd(hcf,nums[i]);
        }

        return 0;
       
    }
};