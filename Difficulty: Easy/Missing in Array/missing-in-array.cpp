class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        
        int l=0,r = arr.size()-1;
        
        while(l <= r){
        int mid = l + (r-l) /2;
            if(arr[mid] == mid +1){
                l = mid +1;
            }else{
                r = mid -1;
            }
        }
        
        return l +1;
        
    }
};