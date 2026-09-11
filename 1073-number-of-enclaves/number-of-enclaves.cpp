class Solution {
public:
    void dfs(int row, int col, vector<vector<int>>& copy) {
        int m = copy.size();
        int n = copy[0].size();
        // NOW perform DFS
        // using the same algo in LC 130 , and the surrounded regions algorithm
        copy[row][col] = -1;//remeber and mark -1 as reachable
        int delrow[] = {1, 0, -1, 0};
        int delcol[] = {0, 1, 0, -1};
        for (int i = 0; i < 4; i++) {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(nrow >= 0 && nrow < m && ncol >= 0 && ncol < n &&
                copy[nrow][ncol] == 1){
                    dfs(nrow,ncol,copy);
                }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {

        int enc = 0;
        vector<vector<int>> copy = grid;
        int m = copy.size();
        int n = copy[0].size();
        // surrrounding
        for (int i = 0; i < m; i++) {
            if (copy[i][0] == 1) {
                dfs(i, 0, copy);
            }
            if (copy[i][n - 1] == 1) {
                dfs(i, n - 1, copy);
            }
        }

        // UUper and Lower Boundary
        for (int j = 0; j < n; j++) {
            if (copy[0][j] == 1) {
                dfs(0, j, copy);
            }
            if (copy[m - 1][j] == 1) {
                dfs(m - 1, j, copy);
            }
        }
        // Now entire scan
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (copy[i][j] == 1){
                    enc++;
                }
            }
        }
    return enc;
    }
};