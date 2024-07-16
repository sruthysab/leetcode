using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> noDupes;
        for(int elem : nums){
            if(noDupes.find(elem) != noDupes.end()){ 
                return true;
            }else{
                noDupes.insert(elem);
            }
        }
        return false;
    }
};