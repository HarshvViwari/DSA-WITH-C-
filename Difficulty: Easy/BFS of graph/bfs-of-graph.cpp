class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n= adj.size();
        vector<int>ans;
        vector<bool>vis(n,false);
        queue<int>neb;
        
        for(int i=0; i<n; i++){
            
            if(!vis[i]){
                vis[i] = true;
                neb.push(i);
                
                while(!neb.empty()){
                    int node = neb.front();
                    neb.pop();
                    ans.push_back(node);
                    
                    for(int nebor : adj[node]){
                        if(!vis[nebor]){
                            vis[nebor] = true;
                            neb.push(nebor);
                        }
                    }
                }
            }
        }
        return ans;
        
    }
};