class Solution {
public:
    int reverseDegree(string s) {
        int revdeg = 0;
        for (int i = 0; i< s.size(); i++) {
            int deg = 26 - (s[i] - 'a');
            revdeg += deg * (i + 1);
        }
    return revdeg;
    }
};