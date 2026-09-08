class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        
        int digit ;
        string n = "123456789";
        string l = to_string(low);
        string h = to_string(high);
        for(int i = 0 ; i<9 ;i++){
            for(int j = i ; j<9 ; j++){
                string temp = n.substr(i,j-i+1);
                int num= stoi(temp);
                if(low<= num && num<=high){
                    ans.push_back(num);
                }
            }
        }
    sort(ans.begin(),ans.end());
    return ans;
    }
};