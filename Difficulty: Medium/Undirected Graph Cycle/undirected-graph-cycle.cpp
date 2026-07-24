
class Solution {
public:
    bool dfs(int node, int parent, vector<int>& visited, vector<vector<int>>& adj) {
        visited[node] = 1;

        for (int nbr : adj[node]) {
            if (!visited[nbr]) {
                if (dfs(nbr, node, visited, adj))
                    return true;
            }
            // visited and not parent => cycle
            else if (nbr != parent) {
                return true;
            }
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);

        // build adjacency list
        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> visited(V, 0);

        // check for disconnected components
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (dfs(i, -1, visited, adj))
                    return true;
            }
        }
        return false;
    }
};


// class Solution {
//   public:
//     bool isCycle(int V, vector<vector<int>>& edges) {
//         // Code here
//         vector<vector<int>>adj(V);
        
//         for(auto &i : edges){
//             adj[i[0]].push_back(i[1]);
//             adj[i[1]].push_back(i[0]);
//         }
        
//         vector<int>visited(V,0);
        
//         for(int i=0; i<V; i++){
//             if(!visited[i]){
//                 if(dfs(i,-1,visited,adj)){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
    
//     bool dfs(int node, int par, vector<int>&vis, vector<vector<int>>adj){
//         vis[node] =1;
        
//         for(auto &nbr : adj[node]){
//             if(!vis[nbr]){
//                 if(dfs(nbr, node, vis, adj)){
//                     return true;  
//                 }
//             }else if(nbr != par) return true;
//         }
//         return false;
//     }
// };