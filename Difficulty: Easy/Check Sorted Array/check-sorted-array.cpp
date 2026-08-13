class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        vector<int>vec = arr;
        sort(arr.begin(), arr.end());
        
        return vec == arr;
    }
};