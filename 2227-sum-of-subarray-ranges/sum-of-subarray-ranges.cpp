class Solution {
public:
    long long subArrayRanges(vector<int>& arr) {
        int n = arr.size();
        // diff of sum of subarray maximums and sum of subaaray miniums
        // sum(maxs)-sum(mins)
        // for maxiums we use NGE+PGE
        vector<int>nge(n);
        vector<int>pge(n);
        vector<int>nse(n);
        vector<int>pse(n);
        stack<int>st;
        // we push only positons as sum of subarray minimum patterns

    // PGE code using forward logic for loop
        for(int i = 0; i<n;i++){
            while (!st.empty() && arr[st.top()]  <= arr[i]){
                st.pop();

            }
            if(st.empty()){
                pge[i] = -1;
            }
            else pge[i] = st.top();
            st.push(i);
        }
        // clear the stack to avoid carrying dumb elements
        while(!st.empty()){
            st.pop();
        }
        // NGE using backward logic
        for(int i = n-1  ; i>=0; i--){
            while(!st.empty() && arr[st.top()] < arr[i]){
                st.pop();
            }
            
        nge[i]=st.empty()?n:st.top();
        st.push(i);
        }
        long long sum2 = 0;
       for(int i = 0 ; i< n ; i++){
        int left = i-pge[i];
        int right = nge[i]-i;
        sum2 += 1LL*left*right*arr[i];
       }
       
       // clear the stack to avoid carrying dumb elements
        while(!st.empty()){
            st.pop();
        }
        // PSE 
        for(int i = 0 ; i <  n ; i++){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            pse[i] = -1;
        }
        else pse[i] = st.top();
        st.push(i);
       }
       // clear stack
     while(!st.empty()){
            st.pop();
     }
       // NSE
    
       for(int i = n-1 ; i>=0 ; i--){
        while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
        }
        nse[i]=st.empty()?n:st.top();
        st.push(i);
       }
       // contributuon
       
      
        long long sum1 = 0;
            for(int i = 0 ; i< n ; i++){
            int left = i-pse[i];
            int right = nse[i]-i;
            sum1 += 1LL*left*right*arr[i];
            }
    return sum2-sum1;
        }
};
