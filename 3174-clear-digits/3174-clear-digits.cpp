#include <stack>
#include <cctype>
class Solution {
public:
    string clearDigits(string s) {
        stack<char> charStack;
        for(char c : s){
            if(isdigit(c)){
                if(!charStack.empty() && !isdigit(charStack.top())){
                    charStack.pop();
                }
            } else {
                charStack.push(c);
            }
        }
        
        string result = "";
        while(!charStack.empty()){
            result += charStack.top();
            charStack.pop();
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};