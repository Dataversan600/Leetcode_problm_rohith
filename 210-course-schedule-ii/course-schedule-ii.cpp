class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

        // we use kahn algo in this again
        /// again convert connections to the adj list
        vector<vector<int>> adj(numCourses);
        int V = numCourses; // no of edges;
        vector<int> topo;
        queue<int>q;
         // acc to algo first take indegree array
        vector<int> indegree(V, 0); // !D array
        // convert edges into adj list;
        for (auto it : prerequisites) {
            int u = it[0];
            int v = it[1];
            adj[v].push_back(
                u); //  v-> u  v is having an edge inward to the node u
        }

        for (int i = 0; i < V; i++) {
            for (auto it : adj[i]) {
                indegree[it]++; // increase count by 1
            }
        }

        // declare queue for storing
        // pick alteast one node with indegree 0  then perform kahn algo
        for (int i = 0; i < V; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }
        // process remaining nodes
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            topo.push_back(node);//ans pushing

            // check it adjacent nodes where indegree is non-zero
            for (auto it : adj[node]) {
                indegree[it]--;
                if (indegree[it] == 0) {
                    q.push(it);
                }
            }

        }
    if(topo.size() == V){
            return topo;
        }
    return {};
    }
};