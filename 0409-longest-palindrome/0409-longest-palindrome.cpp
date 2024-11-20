#include <iostream>
#include <unordered_map>

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> charSet;
        for(char c : s){
            charSet[c]++;
        }
        
        bool isOdd = true;
        int len = 0;
        for(auto& pair : charSet){
            if(pair.second % 2 == 0){
                len += pair.second;
            } else {
                len += pair.second-1; // odd number characters will be used just not all of them
                isOdd = false;
            }
        }
        
        if(!isOdd){ // effecively the biggest odd number is used bc you add back the 1 here if isOdd is triggered
            len++;
        }
        return len;
    }
};