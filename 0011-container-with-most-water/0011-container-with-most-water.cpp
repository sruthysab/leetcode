#include <cmath>

class Solution {
public:
    int maxArea(vector<int>& height) {
        int L = 0;
        int R = height.size()-1;
        int maxArea = 0;
        
        while(L < R){
            maxArea = max(maxArea, min(height[L], height[R])*(R-L));
            if(height[L] > height[R]){
                R--;
            }else{
                L++;
            }
        }
        
        return maxArea;
    }
};