class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int n1,n2;

        for(int i=0; i<n; i++){
           long long sum = nums[i];
           for(int j=i+1; j<n; j++){
            if((sum + nums[j]) == target){
                n1 = i;
                n2= j;
                return {n1,n2};
            }
           }
        }
        return {n1,n2};
    }
};