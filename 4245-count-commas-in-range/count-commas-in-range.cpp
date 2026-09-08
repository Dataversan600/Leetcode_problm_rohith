class Solution {
public:
    int countCommas(int n) {
        if(1<=n && n<=999){
            return 0;
        }
        int comma = 0;
        if(n>999&& n<=100000){
            comma = n-1000+1;
        }
    return comma;
    }
};