class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        unordered_set<int>st;
        for(auto it : nums){
            st.insert(it);
        }
        for(int i = 0 ; i<= n ;i++){         
             if(st.count(i) == 0){
                return i;
            }
        }
    return -1;
    }
};