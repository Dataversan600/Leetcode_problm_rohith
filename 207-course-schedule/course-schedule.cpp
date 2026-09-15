class Solution {
public:
    bool kahn(int numCourses, vector<vector<int>>& prerequisites,
              vector<vector<int>>& adj) {
        vector<int>indegree(numCourses,0);
        // indeg calcultion
        for (int i = 0; i < numCourses; i++) {
            for (auto it : adj[i]) {
                indegree[it]++;
            }
        }
    // declare quuew
        queue<int> q;
        //find alteast one indeg node is 0
        for(int i = 0 ; i< numCourses ; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        int cnt = 0;
        while(!q.empty()){
            cnt++;
            int node = q.front();
            q.pop();
        
       for(auto it : adj[node]){
        indegree[it]--;
        if(indegree[it] == 0) q.push(it);
       }
        }
        
    if(cnt == numCourses){
        return true;
    }
    return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        // declare adjaceny list ,then convert conections or edges into adj list
        vector<vector<int>> adj(numCourses);

        for (auto it : prerequisites) {
            int u = it[0];
            int v = it[1];
            adj[v].push_back(u);
        }

        if(kahn(numCourses,prerequisites ,adj) == true){
            return true;
        }
    return false;
    }
};