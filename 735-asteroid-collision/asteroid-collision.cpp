class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        int n = asteroids.size(); // 0 ,1,2,...are the relative indices of the
                                  // asteroids!!
        vector<int> result;
        stack<int> st;
        for (int current : asteroids) {
            if(current > 0){
                    st.push(current);
                    continue;
                }

            while (!st.empty() && st.top() > 0) {

                
                if (st.top() < -current) {
                    st.pop();
                    // top expodes
                }
                else if (st.top() == -current) {
                    // both explodes
                    st.pop();
                    current = 0;
                    break;
                }
                else {
                    current = 0; // current explodes 
                    break;
                }

            }
        if(current != 0 ){
                    st.push(current);
                }
        }
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};