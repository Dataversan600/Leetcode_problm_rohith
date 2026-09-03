class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
        int dis1 = -1;
        int ind = -1;
        int dis2 = -1;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == target){
              ind = i;
            dis1 = abs(i-start);
            }
        }
        for(int j = n-1; j>=0 ; j--){
             if(nums[j] == target){
              ind = j;
            dis2 = abs(j-start);
            }
        }
       return min(dis1,dis2);
    }
};