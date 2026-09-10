class Solution {
private:
    void bfs(vector<vector<int>>& vis, vector<vector<int>>& mat) {
        // {{row,col},distance}
        queue<pair<pair<int, int>,int>>q;
        
        int m = mat.size();
        int n = mat[0].size();
        // step 1. put al the zeroes into the queue
        for(int i = 0 ; i< m; i++){
            for(int j = 0 ; j< n; j++){
                if(mat[i][j] == 0){
                    q.push({{i,j},0});
                    vis[i][j] = 1;
                }
            }
        }
        
        // step 2 1.ONE BFS
        int drow[] = {1, 0, -1, 0};
        int dcol[] = {0, 1, 0, -1};
        // perform bfs
        while (!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int dist = q.front().second;
            q.pop();
          
            for (int i = 0; i < 4; i++) {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n &&
                                           !vis[nrow][ncol] &&
                                           mat[nrow][ncol] == 1) {
                    
                    vis[nrow][ncol] = 1;
                    mat[nrow][ncol] = dist+1;
                    q.push({{nrow,ncol},dist+1});
                }
            }
        }
    }

public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> ans = mat;
        int m = ans.size();
        int n = ans[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        bfs(vis,mat);
        
       
    return mat;
    }
};