class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        int need = n/2;
        unordered_map<int,int>mp;
        int ans =-1;
        
        for(int i : arr){
            mp[i]++;
            if(mp[i] > need) ans =i;
        }
        
        return ans;
    }
};