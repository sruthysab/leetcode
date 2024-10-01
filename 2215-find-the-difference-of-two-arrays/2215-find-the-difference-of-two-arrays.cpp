class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        // Prepare vectors to store the results
        vector<int> notIn2, notIn1;

        // Find elements in nums1 that are not in nums2
        for (int num : set1) {
            if (set2.find(num) == set2.end()) {
                notIn2.push_back(num);
            }
        }

        // Find elements in nums2 that are not in nums1
        for (int num : set2) {
            if (set1.find(num) == set1.end()) {
                notIn1.push_back(num);
            }
        }   

        // Return the result as a vector of two vectors
        return {notIn2, notIn1};
    }
};