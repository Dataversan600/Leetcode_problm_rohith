class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& visited) {
        visited[node] = 1;
        for(int neighbour : adj[node]){
            if(!visited[neighbour]){
                dfs(neighbour,adj,visited);
            }
        }
    
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count = 0;
        int n = isConnected.size();
        vector<vector<int>> adj(n) ;
        // convert to adjacency list
        for (int i = 0; i < isConnected.size(); i++) {
            for (int j = 0; j < isConnected[i].size(); j++) {
                if (isConnected[i][j] == 1) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        vector<int>visited(n,0);
        for(int i = 0 ; i<n;i++){
            if(!visited[i]){
                count++;
                dfs(i,adj,visited);
            }
        }
    return count;
    }
};