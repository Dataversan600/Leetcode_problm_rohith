class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int mxa = 0;
        int  area ;
        while(left<right){
             if(height[left]<height[right]){
                area = (right-left)*height[left];
                mxa = max(mxa,area);
                left++;
             }
             else if(height[left] == height[right]){
                area = (right-left)*height[left];
                mxa = max(mxa,area);
                left++;
                right--;

             }
             else {
                area = (right-left)*height[right];
                mxa = max(mxa,area);
                right--;   
        }
    }
    return mxa;
    }
};