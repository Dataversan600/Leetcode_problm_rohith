class Solution {
public:
    int maxProduct(int n) {
        int maxx = 0;
        
        string s = to_string(n);
        for(int i = 0 ; i<s.size() ; i++){
            for(int j = 1+i ; j < s.size();j++){

                int d1 = s[i]-'0';
                int d2 = s[j]-'0';
                maxx = max(maxx,d1*d2);
            }
        }
    return maxx;
    }
};