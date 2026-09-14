class Solution {
public:
    bool dfs(int node, vector<vector<int>>& graph,
             vector<int>& vis, vector<int>& pathVis,vector<bool>&check) {
        vis[node] = 1;
        pathVis[node] = 1; // initial config

        // traverse for all neighbours normal dfs
        for (auto it : graph[node]) {
            if (!vis[it]) {
                if (dfs(it, graph, vis, pathVis, check) == true) {
                    check[node] = false;
                    return true;
                }
            }
            // if the node has been previouslty visited ,but it has to be
            // visited on the same path
            else if (pathVis[it]) {
                check[node] = false;
                return true;
            }
        }

        // backtracking
        check[node] = true;
        pathVis[node] = 0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {

        int n = graph.size();
       
        vector<bool> check(n, false);
        vector<int>pathVis(n,0);
        vector<int> vis(n, 0);
        vector<int>safenodes;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(i, graph, vis, pathVis,
                         check); /// dont check for one dfs call and return it
                                 /// immediatey instead do dfs for all paths
            }
        }
            for (int i = 0; i < n; i++) {
                if (check[i] == true) {
                    // cehck is 1 then safe or true;
                    // then push_back it into the vector ans
                    safenodes.push_back(i);
                }
            }
        return safenodes;
    }
};