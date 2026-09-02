class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        
        int sum1=0 ,sum2= 0;
        for(int i = 0 ; i < nums.size() ;i++){
            if(1<= nums[i] && nums[i]<=9){
                sum1+=nums[i];
            }
            if(10<=nums[i] && nums[i]<=99){
                sum2+=nums[i];
            }
            

            }
    return sum1!=sum2;
    }
    
};