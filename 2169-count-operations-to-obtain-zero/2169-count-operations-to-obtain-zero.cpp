#include <iostream>
#include <climits>
class Solution {
public:
    int countOperations(int num1, int num2) {
        long long op = 0;
        while(num1 != 0 && num2 != 0){
            if(num1 >= num2){
                // num1 -= num2;
                // op++; // reduce # of iterations
                op += num1/num2;
                num1 %= num2;
            } else {
                //num2 -= num1;
                //op++;
                op += num2/num1;
                num2 %= num1;
            }
        }
        return (op > INT_MAX) ? -1 : static_cast<int>(op);
    }
};