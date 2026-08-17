class Solution {
public:
   int xorOperation(int n, int start) {
    int xxor = 0;

    for(int i = 0; i < n; i++) {
        xxor = xxor ^ (start + 2 * i);
    }
    return xxor;
}
};
// below is my solution
/*int xorOperation(int n, int start) {
        vector<int>nums(n);
        int xxor = 0;
        for(int i = 0 ; i < n ; i++){
           nums[i] = start+2*i;
        }
        for(int i = 0 ; i< n ; i++){
            xxor = xxor^nums[i];
        }
    return xxor;
    }*/