class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int firNum = INT_MAX;
        int secNum = INT_MAX;
        
        for(int num : nums){
            if(num <= firNum){
                firNum = num;
            } else if(num <= secNum){
                secNum = num;
            } else {
                return true;
            }
        }
        return false;
    }
};