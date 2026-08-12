class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        // code here
        unordered_map<int,int>mp;
        
        for(int i : a) mp[i]++;
        
        for(int i : b){
            if(mp.find(i) != mp.end()){
                if(mp[i] != 0){
                    mp[i]--;
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
        
        return true;
    }
};