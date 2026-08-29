class Solution {
public:
    int calPoints(vector<string>& operations) {
        int size = operations.size();
        
        stack<int>st;
        for(int  i= 0 ; i<size ; i++){

            if(isdigit(operations[i][0])|| operations[i][0] == '-'){
                int num  = stoi(operations[i]);
                st.push(num);
            }
            else if(operations[i] == "C"){
                 st.pop();
            }
           else if(operations[i] == "D"){
                 int top = 2*st.top();
                 
                 st.push(top);
           }
            else{
              int top1 = st.top();
              st.pop();
              int top2 = st.top();
              st.push(top1);
              st.push(top1+top2);
            }
            
        }
        int sum = 0;
        while(!st.empty()){
            int top = st.top();
            sum = sum+top;
            st.pop();
        }
    return sum;
    }
};