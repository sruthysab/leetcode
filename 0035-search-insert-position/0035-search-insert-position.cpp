class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //can we assume the input array is always sorted in ascending order
        //is it guaranteed all elements in the array are distincts? will there be duplicate elements?
        // in the case where target not in list: the index can be on the assumtion that the other elements will be shifted back?
        
        if(nums[0] == target || target < nums[0]) return 0;
        
        int index = -1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == target){
                return i;
            }
            if(nums[i-1] < target && target < nums[i]){
                index = i;
            }
            
        }
        
        if(index == -1 && target > nums[nums.size()-1]){
            return nums.size();
        }
        return index;
    }
};