class Solution {
public:
    int intcnt(long long n , int cnt){
        long long count = 0;
        if(n==1){
          return cnt;
        }
        if(n%2 == 0){
          return intcnt(n/2,cnt+1);
        }
        count =  min(intcnt(n+1,cnt+1),intcnt(n-1,cnt+1));
    return count;
    
    }
    int integerReplacement(int n) {

      int ans  = intcnt(n,0);
      return ans;
        
    }
};