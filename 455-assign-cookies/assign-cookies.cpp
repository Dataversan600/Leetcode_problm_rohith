class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size();
        int m = s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        // apply the greedy approch ,G.A
        // then start assign using eqn size[j] >= g[i]
        int l = 0; // for child for g
        int r=0;//cookie
        while(l < n && r<m){
            if(s[r]>=g[l]){
                l = l+1;
            }
            r = r+1;
        }
    return l;
    }
};