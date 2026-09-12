class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int cnt = 0;
        bool isSpace = false;
        bool started = false;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ' ' && started == false) {
                continue;
            } else if (s[i] == ' ' && started == true) {
                break;
            } else {
                started = true;
                cnt++;
            }
        }
        return cnt;
    }
};