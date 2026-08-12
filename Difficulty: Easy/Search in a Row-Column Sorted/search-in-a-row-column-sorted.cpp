class Solution {
  public:
    bool matSearch(vector<vector<int>> &arr, int x) {
        // code here
        int n = arr.size();
        int m = arr[0].size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j] == x) return true;
            }
        }
        return false;
    }
};