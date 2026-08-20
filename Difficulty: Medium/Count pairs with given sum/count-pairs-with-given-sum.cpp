class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        map<int,int>mp;
        
        int ans =0;
        
        for(int x : arr){
            
            int need = target - x;
            
            if(mp.find(need) != mp.end()){
                ans += mp[need];
            }
            
            mp[x]++;
        }
        
        return ans;
        
    }
};