class Solution {
public:
    string longestPalindrome(string s) {
        //two cases to account for odd and even length palindromes
        string res = "";
        int resLen = 0;
       
        for(int i = 0; i < s.length(); i++){
            //EVEN
            int L = i;
            int R = i+1;
            while(L >= 0 && R < s.length() && s[L] == s[R]){
                if(R-L+1 > resLen){
                    res = s.substr(L, R-L+1);
                    resLen = R-L+1;
                }
                L--;
                R++;
            }
            
            //ODD
            L = i;
            R = i;
            while(L >= 0 && R < s.length() && s[L] == s[R]){
                if(R-L+1 > resLen){
                    res = s.substr(L, R-L+1);
                    resLen = R-L+1;
                }
                L--;
                R++;
            }
            
        }
        return res;
    }
};