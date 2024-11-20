class Solution {
public:
    bool rotateString(string s, string goal) {
        // contains all rotations s + s
        // check if goal is substring of s + s
        if(s.length() != goal.length()){
            return false;
        }
        string completeIter = s + s;
        return completeIter.find(goal) != string::npos;
        
    }
};