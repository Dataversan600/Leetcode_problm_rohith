class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int digitsum = 0;
        int sum = 0;
        for(int i : nums){
            sum+=i;
             while(i>0){
                digitsum += i%10;
                i =i/10;
            }
        }
    
        
    return digitsum-sum > sum ? digitsum-sum : sum-digitsum;
        
    }
};