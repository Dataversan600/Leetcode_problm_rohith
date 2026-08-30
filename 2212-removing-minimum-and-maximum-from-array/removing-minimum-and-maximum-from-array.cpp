class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        int left=0;
        bool leftmax=false;
        bool leftmin=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxi){
                leftmax=true;
            }
            if(nums[i]==mini){
                leftmin=true;
            }
            if(leftmin && leftmax){
                left=i+1;
                break;
            }
        }
        int right=0;
        bool  rightmax=false;
        bool rightmin=false;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==maxi){
                rightmax=true;
            }
            if(nums[i]==mini){
                rightmin=true;
            }
            if(rightmin && rightmax){
                right=nums.size()-i;
                break;
            }
        }
        int subleft=0;
        int subright=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==mini || nums[i]==maxi){
                subleft=i+1;
                break;
            }
        }
        for(int i=nums.size()-1 ;i>=0 ;i--){
            if(nums[i]==mini || nums[i]==maxi){
                subright=nums.size()-i;
                break;
            }
        }
       int total=subleft+subright;
       return min(left,min(right,total));

    }
};