class Solution {
public:
    int strStr(string haystack, string needle) {

        int h = haystack.length();
        int n = needle.length();
        int i = 0;
        int j = h-1;

        for(int i = 0 ; i<=h-n ;i++){
            int j = 0;
            while(j<n){
            if(haystack[i+j] != needle[j])
                break;
            j++;  
            }
            if(j == n)
                return i;

        }
    return -1;
    }
};