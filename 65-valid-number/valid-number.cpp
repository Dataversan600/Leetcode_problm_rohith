class Solution {
public:
    bool isNumber(string s) {
        int n = s.size();
        bool dotSeen = false;
        bool digitSeen = false;
        bool eSeen = false;
        // algo is When I encounter a special character, is it allowed HERE?

        for (int i = 0; i < n; i++) {
            if (isdigit(s[i]))
                digitSeen = true;
            
            else if (s[i] == '+' || s[i] == '-') {
                if (i != 0 && s[i - 1] != 'e' && s[i-1] != 'E') {
                    return false;
                }
            }

            else if (s[i] == '.') {
                if (dotSeen || eSeen) {
                    return false;
                }
    
                dotSeen = true;
            }
            else if(s[i] == 'e' || s[i] == 'E'){
                if(i == 0) return false;
                if(!digitSeen) return false;
                if(eSeen) return false;
                eSeen  = true;
                digitSeen = false;
            }
            else {
                return false;
            }
        }
        return digitSeen;
    }
};