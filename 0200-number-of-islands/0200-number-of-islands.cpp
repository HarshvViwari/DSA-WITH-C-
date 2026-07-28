class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int land = 0;
        int r = grid.size();
        int c = grid[0].size();
        for(int i =0;i<r;i++){
            for(int j =0;j<c;j++){
                if(grid[i][j]=='1'){
                    land++;
                    dfs(grid,i,j);
                }
            }
        }
        return land;
    }

    void dfs(vector<vector<char>>& grid,int i,int j){
        if(i<0  || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]!='1')
            return;
        grid[i][j] = '0';
        dfs(grid,i-1,j);
        dfs(grid,i+1,j);
        dfs(grid,i,j-1);
        dfs(grid,i,j+1);
    }
};