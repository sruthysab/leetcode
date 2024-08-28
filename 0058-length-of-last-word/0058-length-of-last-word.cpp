class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length()-1;
        int lastWordLen = 0;
        
        if(s.length() == 1){
            return 1;
        }
        
        while(n > -1){
            if(s[n] == ' '){
                n--;
            }else{
                break;
            }
        }
        
        
        for(int i = n; i > -1; i--){
            if(s[i] != ' '){
                lastWordLen++;
            }else{
                break;
            }
        }
        return lastWordLen;
    }
};