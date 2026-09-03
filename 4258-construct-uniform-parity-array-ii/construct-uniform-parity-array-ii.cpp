class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int smallestodd = INT_MAX;

        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] % 2 != 0) { // all even
                smallestodd = min(smallestodd, nums1[i]);
            }
        }
        
        if (smallestodd == INT_MAX) {
            return true;
        }
        // Mix case
        for(int x:nums1){
            if(x%2 ==0 && x<smallestodd){
                return false;
            }
        }
    return true;
    }
};