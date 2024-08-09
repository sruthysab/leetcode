#include <vector>
#include <algorithm>
using namespace std; 

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sumLSP = nums[0];
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]+1) sumLSP += nums[i];
            else break;
        }
        
        cout << sumLSP << endl;
        
        sort(nums.begin(), nums.end()); // have to sort it to account for every number
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] == sumLSP){
                sumLSP++;
            }
        }
        return sumLSP;
    }
};