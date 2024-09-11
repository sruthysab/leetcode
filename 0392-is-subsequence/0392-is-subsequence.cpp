class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, k = 0;
        while(i < t.length()){
            if(s[k] == t[i]){
                k++;
                i++;
                if(k == s.length()){
                    return true;
                }
            }else{
                i++;
            }
        }
        return k == s.length();
    }
};