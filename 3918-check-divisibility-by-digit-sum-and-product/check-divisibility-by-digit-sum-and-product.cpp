class Solution {
public:
    bool checkDivisibility(int n) {
       long long  sum = 0;
       long long  prod = 1;
    
        int temp = n;
        while(temp>0){
            sum+=temp%10;
            prod = (prod)*(temp%10);
            temp = temp/10;
        }
        if(n % (sum+prod) == 0){
            return true;
        }
    return false;
    }
};