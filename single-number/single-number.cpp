#include <algorithm>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int elem: nums){
            if(count(nums.begin(), nums.end(), elem) != 2){
                return elem;
            }
        }
        return nums[0];
    }
};