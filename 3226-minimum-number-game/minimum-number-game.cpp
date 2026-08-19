class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>arr;
        int i=0;
        int j=1;
        while(i<nums.size() && j<nums.size()){
            int alice=nums[i];
            int  Bob=nums[j];
            arr.push_back(Bob);
            arr.push_back(alice);
            i+=2;
            j+=2;
        }
return arr;
    }
};