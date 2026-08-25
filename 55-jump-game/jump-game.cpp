class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i  = 0;
        int n = nums.size();
        bool flag = false;
        int farthest = 0;
        
        while(i<=farthest) {
           
             if(farthest>=n-1){
                flag = true;
                break;
             }
            farthest =  max(farthest,i+nums[i]);
            i++;
            }
        
    return flag;
    }
};