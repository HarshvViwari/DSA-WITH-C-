class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        d = d % n;
        
        for(int i=0; i<d; i++){
            arr.push_back(arr[i]);
        }
        arr.erase(arr.begin(), arr.begin() + d);
    }
};