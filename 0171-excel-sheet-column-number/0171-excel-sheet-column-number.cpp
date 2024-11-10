class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        int i = 0;
        for(char c : columnTitle){
            result += c - 'A' + 1;
            i++;
            if(i < columnTitle.length()){
                result *= 26;
            }
        }
        return result;
    }
};