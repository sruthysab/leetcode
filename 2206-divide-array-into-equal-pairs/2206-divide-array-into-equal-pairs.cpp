class Solution {
public:
    bool divideArray(vector<int>& nums) {
        if(nums.size()%2!=0) return false;
        
        unordered_map<int, int> pairCount;
        for(int num : nums){
            pairCount[num]++;
        }
        
        for(const auto& pair: pairCount){
            if(pair.second%2!=0){
                return false;
            }
        }
        return true;
    }
};