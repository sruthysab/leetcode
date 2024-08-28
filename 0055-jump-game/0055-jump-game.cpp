class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goalPost = nums.size()-1;
        for(int i = nums.size()-1; i > -1; i--){
            if(i + nums[i] >= goalPost){
                goalPost = i;
            }
        }
        
        if(goalPost == 0){
            return true;
        }
        return false;
         
    }
};