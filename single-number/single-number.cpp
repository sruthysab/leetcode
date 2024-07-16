#include <algorithm>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int elem: nums){
            res = res ^ elem;
        }
        return res;
    }
};