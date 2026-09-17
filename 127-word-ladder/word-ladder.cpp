class Solution {
public:
    int ladderLength(string beginWord, string endWord,
                     vector<string>& wordList) {
        // initial config
        int len = 0;

        queue<pair<string, int>> q;
        q.push({beginWord, 1});
        unordered_set<string> st(wordList.begin(), wordList.end());
        // now the main algorithm or loop

        while (!q.empty()) {
            string word = q.front().first;
            int steps = q.front().second;
            q.pop();
            if(word == endWord){
                return steps;
            }
            //N* word len*26
            for (int i = 0; i < word.size(); i++) {
                char original = word[i]; // i am looking to change from a to z
                for (char ch = 'a'; ch <= 'z'; ch++) {
                    word[i] = ch;
                    if(ch == original) continue;
                    // it exists in the set
                    if (st.find(word) != st.end()) { // that means it exists
                    st.erase(word);
                    q.push({word,steps+1});//count the steps
                    }
                }
                // again change it to the original
                word[i] = original; //since we need to get its original val back
            
            }
        
        }
        return 0;
        }
    };