class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int size = nums.size();
        stack<int> st;
        vector<int>answer(size);    
        vector<int>result;
        for (int i = 2*size-1; i >= 0 ; i--) {
            int index = i%size;
            while (!st.empty() && st.top() <= nums[index]){
                st.pop();
            }
            if(st.empty()) answer[index] = -1;
            else answer[index] = st.top();
            st.push(nums[index]);
        }
        
        // for(int i = 0 ; i < size ; i++){
        //     result.push_back(answer[i]);
        // }
        return answer;
    }
};