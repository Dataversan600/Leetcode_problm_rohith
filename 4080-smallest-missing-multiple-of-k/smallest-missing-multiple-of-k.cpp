class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
         
        unordered_set<int>hash;
        for(int n : nums){
            hash.insert(n);
        }
        // .insert for insert or push_back , .clearfor deleting all the things ,auto it = myset.find(element) if"it" is an iterator then it!= myset.end()
        int multiple = k;
        // auto it = hash.find(multiple)
        // if(hash.find(multiple) == hash.end())

        
        for(multiple; ;multiple += k){
            if(hash.count(multiple) == 0){
                return multiple;
            }
        }
    }
};