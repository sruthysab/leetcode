class Solution {
public:
    string removeStars(string s) {
        stack<int> removeStars;
        
        for(char c : s){
            if(!removeStars.empty() && c == '*'){
                removeStars.pop();
            } else {
                removeStars.push(c);
            }
        }
        
        string newS = "";
        while(!removeStars.empty()){
            newS.push_back(removeStars.top());
            removeStars.pop();
        }
        reverse(newS.begin(), newS.end());        
        return newS;
        
    }
};