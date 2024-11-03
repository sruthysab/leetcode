class Solution {
public:
    double myPow(double x, int n) {
        //base case
        if(x == 0) return 0;
        if(n == 0) return 1;
        
        int absN = abs(n); // take absolute value of n
        double res = myPow(x, absN/2); // recursive call divide n by 2
        res *= res; // multiply the result
        if(absN % 2 != 0){ // if its odd multiply by x e.g (2^2 * 2^2 * 2 = 2^5)
            res *= x;
        }
       
        return (n >= 0)? res : 1.0/res; // in case n is negative and fractions
    }
};