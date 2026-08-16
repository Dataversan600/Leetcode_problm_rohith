class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        if(nums.size()==1) return false;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second >1) return true;
        }
        return false;
    }

};