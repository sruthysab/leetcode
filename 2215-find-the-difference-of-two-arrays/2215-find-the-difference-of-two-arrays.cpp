class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        
        vector<int> diff1, diff2;
        
        for(const auto& num : s1){
            if(s2.find(num) == s2.end()){
                diff2.push_back(num);
            }
        }
        
        for(const auto& num : s2){
            if(s1.find(num) == s1.end()){
                diff1.push_back(num);
            }
        }
        
        return {diff2, diff1};
    }
};