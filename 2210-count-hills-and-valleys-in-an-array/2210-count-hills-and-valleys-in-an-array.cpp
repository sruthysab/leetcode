class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> uniqueCount;
        int count = 0;
        uniqueCount.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                uniqueCount.push_back(nums[i]);
            }
        }
        
        for(int i = 1; i < uniqueCount.size()-1; i++){
            if(uniqueCount[i-1] > uniqueCount[i] && uniqueCount[i+1] > uniqueCount[i]){
                count++;
            }
            if(uniqueCount[i-1] < uniqueCount[i] && uniqueCount[i+1] < uniqueCount[i]){
                count++;
            }
        }
        return count;
    }
};