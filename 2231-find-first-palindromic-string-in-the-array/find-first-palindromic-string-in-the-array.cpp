class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for(int i = 0 ; i < n;i++){
            string rev = words[i];
            reverse(rev.begin(),rev.end());
            if(words[i] == rev){
                return words[i];
               
            } 
        }
    return "";
    }
    
    
};