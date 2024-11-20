class Solution {
public:
    void swap(int &i, int &j){
        int temp = i;
        i = j;
        j = temp;
    }
    vector<int> sortEvenOdd(vector<int>& nums) {
        // even indices non-decreasing -> increasing
        for(int i = 0; i < nums.size(); i+=2){
            for(int j = i+2; j < nums.size(); j+=2){
                if(nums[i] > nums[j]){
                    swap(nums[i], nums[j]);
                }
            }
        }
        
        //odd indices non-increasing -> decreasing
        for(int i = 1; i < nums.size(); i+=2){
            for(int j = i+2; j < nums.size(); j+=2){
                if(nums[i] < nums[j]){
                    swap(nums[i], nums[j]);
                }
            }
        }
        return nums;
    }
};