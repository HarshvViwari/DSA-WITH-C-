class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size(), sum =0;

        for(int i=0; i<n; i++){
            int p=1;
            for(int j=i; j<n; j++){
                p *= nums[j];

                if(p < k) sum++;
                else break;
            }
        }
        return sum;
    }
};