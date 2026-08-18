class Solution {
public:
    
    int trap(vector<int>& height) {
        
        int trapw = 0;
        int h = height.size();
        vector<int>water(h,0);
        vector<int>rightMax(height.size(),0);
        vector<int>leftMax(height.size(),0);
        int maxsofar = INT_MIN;
        for(int i = 0 ; i < h ; i++){
               maxsofar = max(maxsofar,height[i]);
               leftMax[i] = maxsofar;
        }
        
        
        
        int maxSofar = INT_MIN;
        for(int j = h-1 ;j>=0 ;j--){
            maxSofar = max(maxSofar,height[j]);
            rightMax[j] = maxSofar;
        }

        for(int i = 0 ; i < h ; i++){
            water[i] = min(leftMax[i],rightMax[i])-height[i];
             trapw += water[i];
        }
return trapw;
        }
};