class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        set<int>st(arr.begin(), arr.end());
        
        arr.clear();
        for(int i : st){
            arr.push_back(i);
        }
        return arr;
    }
};