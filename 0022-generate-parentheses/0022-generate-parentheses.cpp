class Solution {
private:
    vector<string> result;
    
public:
    void backtrack(int n, int openN, int closeN, string curr){
        if(n == openN && closeN == n){
            result.push_back(curr);
            return;
        }
        
        if(openN < n){
            backtrack(n, openN + 1, closeN, curr + "(");
        }
        
        if(closeN < openN){
            backtrack(n, openN, closeN + 1, curr + ")");
        }
    }
    
    vector<string> generateParenthesis(int n) {
        result.clear();
        backtrack(n, 0, 0, "");
        return result;
    }
};