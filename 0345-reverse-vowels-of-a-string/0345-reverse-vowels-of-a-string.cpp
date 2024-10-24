class Solution {
public:
    string reverseVowels(string s) {
        // pointers
        int L = 0;
        bool Lflag = false;
        bool Rflag = false;
        int R = s.length()-1;
        
        auto isVowel = [](char ch){
            return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'U' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O';
        };
        
        while(L < R){
            if(isVowel(s[L])){
                Lflag = true;
            }else{
                L++;
            }
            if(isVowel(s[R])){
                Rflag = true;
            }else{
                R--;
            }
            
            if(Lflag & Rflag){
                char temp = s[L];
                s[L] = s[R];
                s[R] = temp;
                L++;
                R--;
                Rflag = false;
                Lflag = false;
            }  
        }
        return s;
        
    }
};