class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;
        int sign = 1;
        long long num = 0;

        // 1. Skip leading spaces
        while(i < n && s[i] == ' ')
            i++;

        // 2. Handle sign
        if(i < n && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if(i < n && s[i] == '+') {
            i++;
        }

        // 3. Read digits
        while(i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            num = num * 10 + digit;

            // 4. Overflow check
            if(sign == 1 && num > INT_MAX)
                return INT_MAX;

            if(sign == -1 && num > INT_MAX)
                return INT_MIN;

            i++;
        }

        return sign * num;
    }
};