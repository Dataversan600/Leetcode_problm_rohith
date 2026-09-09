class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int number = 0;
        /// declare a map mp
        unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        // process upto n-1 elements , then handle last elt at the end
        for (int i = 0; i < n - 1; i++) {

            if (mp[s[i]] < mp[s[i + 1]]) {
                number -= mp[s[i]];
            } else
                number += mp[s[i]];
        }
        number += mp[s[n - 1]];
        return number;
    }
};