class Solution {
private:
    void bfs(int r, int c, vector<vector<char>>& grid,
             vector<vector<int>>& vis) {
        queue<pair<int, int>> q;
        int m = grid.size();
        int n = grid[0].size();
        q.push({r, c});
        vis[r][c] = 1;
        int delrow[] = {0, 1, 0, -1};
        int delcol[] = {-1, 0, 1, 0};
        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n &&
                    !vis[nrow][ncol] && grid[nrow][ncol] == '1') {
                    q.push({nrow, ncol});
                    vis[nrow][ncol] = 1;
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        // convert the  matrix into list
        int m = grid.size();
        int n = grid[0].size();

        // declare 2D visited array
        vector<vector<int>> vis(m, vector<int>(n, 0)) ;
        int island = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == '1' && !vis[i][j]) {
                    island++;
                    bfs(i, j, grid, vis);
                }
            }
        }
        return island;
    }
};