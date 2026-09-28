class Solution {
public:
    int maxDepth(string s) {
        int mdepth = 0;
        int depth = 0;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '(')
                depth++;
            else if(s[i] == ')')
               depth--;

            mdepth = max(mdepth, depth);
        }
      return mdepth;
    }
};