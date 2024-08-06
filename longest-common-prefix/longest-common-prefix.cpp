#include <algorithm>
#include <string>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_length = strs[0].length();
        string str = strs[0];

            
        for(int i = 0; i < strs.size(); i++){
            if(strs[i].length() < min_length){
                min_length = strs[i].length();
                str = strs[i];
            } 
        }
        
        int count = 0;
        for(int i = 0; i < min_length; i++){
            for(int j = 0; j < strs.size(); j++){
                if(strs[j][i] != str[i]){
                    return str.substr(0, count);
                }
            }
            count++;
        }
        return str.substr(0, count);
    }
};