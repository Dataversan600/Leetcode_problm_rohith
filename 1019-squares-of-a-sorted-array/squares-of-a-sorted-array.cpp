class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
        int n = nums.size();
        vector<int>sqr(n,0);
        for(int i = 0 ;i < n; i++){
            sqr[i] = nums[i]*nums[i];
        }
    sort(sqr.begin(),sqr.end());
    return sqr;
    }
};