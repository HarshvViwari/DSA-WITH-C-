class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        int n = arr.size();
        if(n == 1) return arr[0];
        sort(arr.begin(), arr.end());
        int l =0, r =n-1;
        int ans;
        while(l <= r){
            if(arr[l] == arr[l+1]){
                l = l+2;
            }else{
                ans = arr[l];
                break;
            }
            
            if(arr[r] == arr[r-1]){
                r = r-2;
            }else{
                ans = arr[r];
                break;
            }
        }
        return ans;
        
    }
};