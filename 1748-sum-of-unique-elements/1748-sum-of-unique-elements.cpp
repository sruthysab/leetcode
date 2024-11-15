#include <unordered_set>
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> uniqueSum;
        for(int n : nums){
            uniqueSum[n]++;
        }
        
        int sum = 0;
        for(auto& pair : uniqueSum){
            if(pair.second == 1){
                sum += pair.first;
            }
        }
        return sum;
    }
};