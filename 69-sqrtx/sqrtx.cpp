class Solution {
public:
    int mySqrt(int x) {
        int l= 0;
        int r = x;
        long long ans = 0;
        while(l<=r){
            long long mid = l+((r-l)/2);
            if(mid*mid < x){
                ans = mid;
                l= mid+1;
               
            }
            else if(mid*mid>x){
                r = mid-1;
            }
            else return mid;
        }
    return ans;
    
    }
};