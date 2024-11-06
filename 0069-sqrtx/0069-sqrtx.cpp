class Solution {
public:
    int mySqrt(int x) {
        unsigned l = 1; // avoid division by zero
        unsigned r = x + 1u;
        
        while(l < r){
            unsigned m = (l + r)/2;
            if(m > x/m){ // to preven integer overflow
                r = m;
            } else {
                l = m + 1;
            }
        }
        
        return l - 1;
    }
};