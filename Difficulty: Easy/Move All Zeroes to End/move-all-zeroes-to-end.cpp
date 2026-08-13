class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int cnt =0;
        int i=0, n = arr.size();
        
        for(int j=0; j<n; j++){
            if(arr[j] != 0){
                arr[i] = arr[j];
                cnt++;
                i++;
            }
        }
        
        while(i<n){
            arr[i] =0;
            i++;
        }
        
    }
};