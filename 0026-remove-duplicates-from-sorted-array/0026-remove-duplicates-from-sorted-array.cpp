#include <iostream>
#include <set>
#include <vector>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int R = 1;
        for(int L = 1; L < nums.size(); L++){
            if(nums[L] != nums[L-1]){
                nums[R] = nums[L];
                R++;
            }
        }
        return R;
    }
};