class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> dup;
        int i = 0;
        while(i < nums.size() && i < nums.size()){
            if(dup.find(nums[i]) != dup.end()){
                if(i-dup[nums[i]] <=  k){
                    return true;
                }
            }
            dup[nums[i]] = i;
                i++;
        }
        return false;
    }
};