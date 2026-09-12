class Solution {

public:
    bool dfs(int node, int col ,vector<int>& color, vector<vector<int>>& graph) {
         color[node] = col;
        for (auto it: graph[node]) {
            if (color[it] == -1) {
               if(!dfs(it,1-col,color,graph)){
                return false;
               }
            } 
            else if (color[it] == color[node]) 
                return false;
            }
    return true;   
    }
    bool isBipartite(vector<vector<int>>& graph) {
        // unidirected grph with n nodes with 0 to n-1
        // initially fill with value - 1 and then continue
        
        int n = graph.size();
        vector<int> color(n, -1);
        // given graph  grid or 2D martic consist adjacency list
        bool ans = true;
        for (int i = 0; i < n; i++) {
            if(color[i] == -1){
                color[i] = 0;
                 if(!dfs(i, 0,color, graph)) return false;
            }
        }
    return true;
    }
    };