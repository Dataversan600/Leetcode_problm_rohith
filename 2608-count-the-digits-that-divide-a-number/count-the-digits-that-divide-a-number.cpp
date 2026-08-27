class Solution {
public:
    int countDigits(int num) {
        int cnt  = 0;
        int digit = 0;
        int temp = num;
        while(num>0){
        digit = num%10;
    
        if(temp%digit == 0){
            cnt++;
        }
        num = num/10;
        
        }
    return cnt;
    }
};