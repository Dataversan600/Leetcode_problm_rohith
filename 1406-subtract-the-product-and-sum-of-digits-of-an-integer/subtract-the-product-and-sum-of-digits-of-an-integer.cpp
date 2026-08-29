class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp = n;
        int prod = 1;
        int sum = 0;
        // first product then sum
        while(temp > 0){
        sum = sum+(temp%10);
        prod = prod*(temp%10);
        temp = temp/10;
        }
    return prod-sum ;
    }
};