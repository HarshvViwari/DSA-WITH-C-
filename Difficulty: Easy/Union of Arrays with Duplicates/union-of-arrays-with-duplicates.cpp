class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        // set<int>s1(a.begin(),a.end());
        // set<int>s2(b.begin(),b.end());
        unordered_map<int,int>mp;
        for(int x : a){
            mp[x]++;
        }
        for(int x : b){
            mp[x]++;
        }
        vector<int>vec;
        for(auto it : mp){
            
               vec.push_back(it.first);
            
        }
        return vec;
    }
};