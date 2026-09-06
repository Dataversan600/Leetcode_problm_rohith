class Solution {
public:
    // bool isPrime(int n) {
    //     if (n < 2) {
    //         return false;
    //     }
    //     for (int j = 2; j < n; j++) {
    //         if (n % j == 0) {
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    // vector<int> primefactors(int n) {
    //     if (n < 0 || n == 1) {
    //         return {};
    //     }
    //     vector<int> ans;
    //     if (n >= 2) {
    //         for (int i = 2; i < n; i++) {
    //             if (n % i == 0 && isPrime(i)){
    //                 ans.push_back(i);
    //             }
    //         }
    //     }
    // return ans;
    // }

    // bool isUgly(int n) {
    //     vector<int>pf;
    //     if(n==0){
    //         return false;
    //     }
    //     if (n < 0) {
    //         return false;
    //     }
    //     if (n == 1)
    //         return true;
    //     if(n>=2){
            
    //         pf = primefactors(n);
    //         for(int  i = 0 ; i<pf.size();i++){
    //            if(pf[i] != 2 && pf[i] != 3 && pf[i] !=5){
    //             return false;
    //            }
    //         }
    //     }
    //     return true;
    // }
    bool isUgly(int n){
        if(n<=0)
        return false;
        while(n%2 == 0){
          n /= 2;
        }
        while(n%3 == 0){
           n /= 3;
        }
        while(n%5 == 0){
          n /= 5;
        }
    return n==1;
    }
};