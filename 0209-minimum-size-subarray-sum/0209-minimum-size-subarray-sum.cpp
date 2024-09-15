class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //remove from the front when sum becomes > target
        int minLen = INT_MAX;
        int start = 0, sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            while(sum >= target){
                minLen = min(minLen, i-start+1);
                sum -= nums[start];
                start++;
            }
        }
        return (minLen == INT_MAX)? 0 : minLen;
    }
};