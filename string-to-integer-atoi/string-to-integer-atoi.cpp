#include <cctype>


class Solution {
public:
    int myAtoi(string s) {
        int charIndex = 0;
        int sign = 1;
        long long result = 0;
        
        if(s.empty()){
            return 0;
        }
        
        while (charIndex < s.length() && s[charIndex] == ' ') {
            charIndex++;
        }
        
        if(s[charIndex] == '+' || s[charIndex] == '-'){
            sign = (s[charIndex++] == '-')  ? -1 : 1;
        }
        
        while(charIndex < s.length() && isdigit(s[charIndex])){
            result = result * 10 + (s[charIndex] - '0');
            if (result * sign > INT_MAX) {
                return INT_MAX;
            }
            if (result * sign < INT_MIN) {
                return INT_MIN;
            }
            charIndex++;
        }
        
        return int(result * sign);
    }
};