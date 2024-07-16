using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> occur;
        vector<int> res;
        for(int elem : nums1){
            occur[elem]++;
        }
        
        for(int elem : nums2){
            if(occur.find(elem) != occur.end() && occur[elem] > 0) {
                occur[elem]--;
                res.push_back(elem);
            }
        }
        return res;
        
    }
};