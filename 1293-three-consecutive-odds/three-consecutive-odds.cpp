class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        //int three = 3;
        for(int i = 0 ; i+2 < arr.size();i++){
           
             if((arr[i]&1 != 0) && (arr[i+1]&1 != 0) && (arr[i+2]&1 !=0)){
                    return true;
                }
            }
        
    return false;
    }
};