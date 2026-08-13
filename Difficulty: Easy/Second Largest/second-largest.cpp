class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = 0;
        int sl =0;
        sort(arr.begin(), arr.end());
        for(int x : arr){
            if(x > largest){
                sl = largest;
                largest = x;
            }
            
        }
        if(sl == 0) return -1;
        
        return sl;
    }
};