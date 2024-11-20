class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int pairs = 0; //maybe possible integer overflow
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(i < j && nums[i] == nums[j] && (i*j)%k == 0){
                    pairs++;
                }
            }
        }
        return pairs;
    }
};