class Solution {
public:
    bool isValid(string s) {
        stack<char> check;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                check.push(s[i]);
            }
            if(s[i] == ')'){
                if(!check.empty() && check.top() == '('){
                    check.pop();
                }else{
                    return false;
                }
            }
            if( s[i] == ']'){
                if(!check.empty() && check.top() == '[' ){
                    check.pop();
                }else{
                    return false;
                }
            }
            if( s[i] == '}'){
                if(!check.empty() && check.top() == '{'){
                    check.pop();
                }else{
                    return false;
                }
            }
        }
        return check.empty();
    }
};