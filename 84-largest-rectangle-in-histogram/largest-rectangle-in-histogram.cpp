class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int width = 0;
        stack<int>st;
       
      
        vector<int>pse(n,0);
        vector<int>nse(n,0);
        long long maxArea = INT_MIN;
        long long area = 0;
        // NSE ,then PSE
        for(int j = n-1 ; j>=0 ; j--){
            while(!st.empty() && heights[j]<=heights[st.top()]){
                st.pop();
            }
            nse[j] = st.empty()?n:st.top();
            st.push(j);
        }
        while(!st.empty())
            st.pop();
        // PSE
        for(int  i = 0 ; i < n ; i++){
            while(!st.empty() && heights[i]<=heights[st.top()]){
                st.pop();
            }
            pse[i] = st.empty()?-1:st.top();
            st.push(i);
        }
        int height = -1;
        for(int  k  = 0 ; k<n ; k++){
            height = heights[k];
            width = nse[k]-pse[k]-1;
            area = height*width;
            maxArea =  max(area,maxArea);

        }
    return maxArea;
    
    }
};