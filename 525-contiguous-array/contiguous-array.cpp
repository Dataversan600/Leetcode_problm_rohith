class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int len = nums.size();
        int longest = 0;
        unordered_map<int,int>hash;
        int prefixsum = 0;
        hash[0] = -1;
       
       
        for(int i = 0 ; i<len; i++){
           if(nums[i] == 0){
            prefixsum--;
           }
            else prefixsum++;
            if(hash.find(prefixsum) == hash.end()){
                hash[prefixsum] = i;
            }
            else{
                longest = max(longest,i-hash[prefixsum]);
            }
        }
    return longest;
        
           
    }
    
};