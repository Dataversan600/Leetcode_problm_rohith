class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>& ans,
             vector<vector<int>>& image, int newcolor, int delrow[],
             int delcol[],int inicolor) {
                // paint the current cell
         ans[row][col] = newcolor;
        int m = image.size();
        int n = image[0].size();
        for (int i = 0; i < 4; i++) {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n &&
                        ans[nrow][ncol] == inicolor  && image[nrow][ncol] != newcolor) {
                    dfs(nrow, ncol, ans, image, newcolor, delrow, delcol,inicolor);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        vector<vector<int>> ans = image;
        int inicolor = image[sr][sc];
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, +1, 0, -1};
        dfs(sr, sc, ans, image, color, delrow, delcol,inicolor);
        return ans;
    }
};