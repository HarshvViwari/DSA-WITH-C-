class Solution {
  public:
    
    void helper(vector<vector<int>>&vec, vector<bool>&v,int cur){
        v[cur] = true;
        ans.push_back(cur);
        for(int i=0; i<vec[cur].size(); i++){
            int node = vec[cur][i];
            if(!v[node]){
                helper(vec,v,node);
            }
        }
    }
    
    vector<int>ans;
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector<bool>vis(n,false);
        
            helper(adj,vis,0);
        
        
        return ans;
        
    }
};