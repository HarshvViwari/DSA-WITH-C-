class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        // code here
        vector<int>ans;
        
        unordered_map<int,int>mp;
        for(int x : a){
            mp[x]++;
        }
        
        for(int x : b){
            if(mp.find(x) != mp.end()){
                ans.push_back(x);
                mp.erase(x);
            }
        }
        sort(ans.begin(),ans.end());
        
        return ans; 
    }
};