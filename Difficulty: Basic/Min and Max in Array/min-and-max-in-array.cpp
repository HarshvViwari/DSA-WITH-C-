class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int minnum = INT_MAX;
        
        int maxnum = INT_MIN;
        
        for(int i : arr){
            maxnum = max(maxnum, i);
            minnum = min(minnum, i);
        }
        
        return {minnum, maxnum};
    }
};