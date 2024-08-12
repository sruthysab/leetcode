class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int index = -1;
        for(int i = 0; i < nums.size(); i++){
            if(i%10 == nums[i]){
                index = i;
                return index;
            }
        }
       
        return index;
    }
};