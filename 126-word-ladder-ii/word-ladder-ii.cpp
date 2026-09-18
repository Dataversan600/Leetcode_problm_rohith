class Solution {
public:
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> parent;
    unordered_map<string, int> level;

    void dfs(string word, string beginWord, vector<string>& path) {
        if (word == beginWord) {
            vector<string> temp = path;
            reverse(temp.begin(), temp.end());
            ans.push_back(temp);
            return;
        }

        for (auto prev : parent[word]) {
            path.push_back(prev);
            dfs(prev, beginWord, path);
            path.pop_back();
        }
    }

    vector<vector<string>> findLadders(string beginWord,
                                       string endWord,
                                       vector<string>& wordList) {

        unordered_set<string> st(wordList.begin(), wordList.end());

        if (!st.count(endWord))
            return {};

        queue<string> q;
        q.push(beginWord);

        level[beginWord] = 0;

        while (!q.empty()) {

            string curr = q.front();
            q.pop();

            int currLevel = level[curr];

            for (int i = 0; i < curr.size(); i++) {

                string next = curr;
                
                for (char c = 'a'; c <= 'z'; c++) {

                    next[i] = c;

                    if (!st.count(next))
                        continue;

                    // First time discovered
                    if (!level.count(next)) {
                        level[next] = currLevel + 1;
                        q.push(next);

                        parent[next].push_back(curr);
                    }
                    // Another shortest path
                    else if (level[next] == currLevel + 1) {
                        parent[next].push_back(curr);
                    }
                }
            }

            // Remove after processing this node
            st.erase(curr);
        }

        if (!level.count(endWord))
            return {};

        vector<string> path;
        path.push_back(endWord);

        dfs(endWord, beginWord, path);

        return ans;
    }
};