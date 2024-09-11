class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;  // This will count the number of elements not equal to val

        // Traverse the array and move non-val elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];  // Move the valid element to the front
                k++;  // Increment k for the next position
            }
        }

        // k now represents the number of valid elements
        return k;
    }
};