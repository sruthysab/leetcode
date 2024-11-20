#include <string>
#include <iostream>
#include <vector>
#include <cctype>

class Solution {
public:
    
    int colToNum(string col){
        int result = 0;
        for(char c : col){
            result = result * 26 + (c -'A'+ 1);
        }
        return result;
    }
    
    string numToCol(int num){
        string col = "";
        while(num > 0){
            num--;
            col += char(num % 26 + 'A');
            num/=26;
        }
        return col;
    }
    
    vector<string> cellsInRange(string s) {
        int startR = stoi(s.substr(1, 1));
        int endR = stoi(s.substr(4,1));
        int startC = colToNum(s.substr(0,1));
        int endC = colToNum(s.substr(3,1));
        vector<string> result;
        
        for(int i = startC; i <= endC; i++){
            for(int j = startR; j <= endR; j++){
                result.push_back(numToCol(i) + to_string(j));
            }
        }
        return result;
    }
};