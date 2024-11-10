#include <unordered_map>
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> strCount;
        for(string str : arr){
            strCount[str]++;
        }
        
        for(const auto& str : arr){
            if(strCount[str] == 1){
                k--;
                if(k == 0){
                    return str;
                }
            }
        }
        return "";
    }
};