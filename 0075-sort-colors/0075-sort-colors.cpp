class Solution {
public:
    void sortColors(vector<int>& nums) {

        int a=0,b=0,c=0;

        for(int i : nums){
            if(i == 0){
                nums[c++] = 2;
                nums[b++] = 1;
                nums[a++] = 0;
            }if(i == 1){
                nums[c++] = 2;
                nums[b++] = 1;
            }if(i == 2){
                nums[c++] = 2;
            }
        }

        // int low = 0, mid = 0, high = nums.size()-1;
        // while(mid <= high){
        //     if(nums[mid] == 0){
        //         swap(nums[low], nums[mid]);
        //         low++;
        //         mid++;
        //     }
        //     else if(nums[mid] == 1){
        //         mid++;
        //     }
        //     else{
        //         swap(nums[mid], nums[high]);
        //         high--;
        //     }
        }
    
};