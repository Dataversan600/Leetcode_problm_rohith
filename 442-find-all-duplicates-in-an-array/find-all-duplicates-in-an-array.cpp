class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> ans;
        if (n == 1) {
            return {};

        } else {
            for (int i = 0; i < n-1; i++) {
                if(nums[i+1] == nums[i]){
                    ans.push_back(nums[i]);
                }
            }
        }
    return ans;
    }
};