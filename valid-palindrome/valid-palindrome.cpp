#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        
        
        for(char c : s){
            if(isalnum(c)){
                c = tolower(c);
                temp += c;
            }
        }
        
        if(temp.empty()){
            return true;
        }
        
        int start = 0;
        int end = temp.length()-1;
        while(start <= end){
            if(temp[start] != temp[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};