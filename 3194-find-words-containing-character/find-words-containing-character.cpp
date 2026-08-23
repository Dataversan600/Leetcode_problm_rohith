class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ind;
        for(int i = 0 ; i < words.size(); i++){
            for(int j = 0 ;j<words[i].size();j++){
             if(words[i][j] == x){
                ind.push_back(i);
                break;
             }
        
        }
        }
        return ind;
        

    }
};