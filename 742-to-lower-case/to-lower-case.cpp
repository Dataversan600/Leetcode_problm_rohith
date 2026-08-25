class Solution {
public:
    string toLowerCase(string s) {
        int n = s.size();
        
        for(int i = 0; i < s.size(); i++) {

            char ch = s[i];
            
            if(ch >=65 && ch<=90){
                s[i] = s[i]+32;
            }

        }
    return s;
        
        
        
       
    }
};