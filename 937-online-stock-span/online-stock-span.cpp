class StockSpanner {
    stack<pair<int,int>>st;//global information
    int ind = -1;
public:
    void clear(stack<pair<int,int>>& st){
        while(!st.empty()){
            st.pop();
        }
    }
    StockSpanner() {
      
       int ind = -1;
       clear(st);
    }
    
    int next(int price) {
       int ans = -1;
       ind ++; // since price it is added or we have got a new value
       while(!st.empty() && st.top().first <=  price){
        st.pop();
       }
       ans = ind-(st.empty()?-1:st.top().second);
       st.push({price,ind});
    return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */