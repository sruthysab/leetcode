class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 1;
        int currNum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(currNum == nums[i]){
                count++;
            } else if(count > n/2){
                return currNum;
            } else {
                currNum = nums[i];
            }
        }
        return currNum;
    }
};