class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int iscore;
        vector<int>prefMax(n);
        int mx = INT_MIN;
        for(int i = 0  ; i<n ; i++){
            mx = max(mx,nums[i]);
            prefMax[i] = mx;
        }
        vector<int>suffMin(n);
        int mxx = INT_MAX;
        for(int j = n-1;j>=0;j--){
            mxx = min(mxx,nums[j]);
            suffMin[j] = mxx;
        }

        for(int i= 0; i<n; i++){
            iscore = prefMax[i]-suffMin[i];
            if(iscore<=k){
                return i;
            }
        }
    return -1;
    }
};