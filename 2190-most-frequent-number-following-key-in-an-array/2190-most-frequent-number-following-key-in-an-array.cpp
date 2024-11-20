#include <iostream>
#include <unordered_map>
class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> targetCount;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == key && i+1 < nums.size()){
                targetCount[nums[i+1]]++;
            }
        }
        
        int maxCount = 0;
        int target = 0;
        for(const auto& pair : targetCount){
            if(pair.second > maxCount){
                maxCount = pair.second;
                target = pair.first;
            }
        }
        return target;
    }
};