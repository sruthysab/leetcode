#include <cctype>
#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) return true;

        string filtered; // To store valid characters

        // Process the string
        for (char c : s) {
            if (isalnum(c)) { // Check if character is alphanumeric
                filtered += tolower(c); // Convert to lowercase and add to filtered string
            }
        }

        // If filtered string is empty, return false
        if (filtered.empty()) return true;
        
        cout << filtered << endl;
        int L = 0;
        int R = filtered.length()-1;
        
        while(L < R){
            if(filtered[L] == filtered[R]){
                L++;
                R--;
            } else {
                return false;
            }
        }
        return true;
    }
};