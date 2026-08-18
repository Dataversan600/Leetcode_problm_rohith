class Solution {
public:
    
    int largestInteger(vector<int>& nums, int k) {
         
        int ans = -1;
        int  n = nums.size();
        unordered_map<int,int>hash;      
        if(k==n) return *max_element(nums.begin(),nums.end());;
        
        if(k>n) return -1;
        
        for(int i = 0 ; i < n-k+1 ; i++){
            for(int j = i ; j < k+i; j++){
                hash[nums[j]]++;
            }
        }

       for(int x=0 ; x< n ; x++){
        if(hash[nums[x]] == 1){
            ans = max(ans,nums[x]);
        }
       }
    return ans;
    }
};