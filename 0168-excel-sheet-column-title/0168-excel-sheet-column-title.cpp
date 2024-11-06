class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        
        while(columnNumber > 0){
            int curr = (columnNumber - 1) % 26;
            result += ('A' + curr);
            columnNumber = (columnNumber - 1) / 26;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};