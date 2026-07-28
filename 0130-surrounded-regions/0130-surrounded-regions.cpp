class Solution {
public:
    void dfs(vector<vector<char>>& b, int i, int j) {
        if (i < 0 || j < 0 || i >= b.size() || j >= b[0].size() || b[i][j] != 'O')
            return;

        b[i][j] = '#';
        dfs(b, i + 1, j);
        dfs(b, i - 1, j);
        dfs(b, i, j + 1);
        dfs(b, i, j - 1);
    }

    void solve(vector<vector<char>>& b) {
        int m = b.size(), n = b[0].size();

        for (int i = 0; i < m; i++)
            dfs(b, i, 0), dfs(b, i, n - 1);

        for (int j = 0; j < n; j++)
            dfs(b, 0, j), dfs(b, m - 1, j);

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                b[i][j] = (b[i][j] == 'O') ? 'X' : (b[i][j] == '#') ? 'O' : 'X';
    }
};