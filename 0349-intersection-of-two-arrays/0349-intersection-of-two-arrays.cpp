#include <vector>
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, bool> dup;
        vector<int> result;
    
        for(int n : nums1){
            dup[n] = true;
        }
        
        for(int n : nums2){
            if(dup.find(n) != dup.end()) { //if found
                dup[n] = false;;
                
            }
        }
        
        
        for(auto& pair : dup){
            if(pair.second == false){
                result.push_back(pair.first);
            }
        } 
        return result;
    }
};