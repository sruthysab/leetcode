#include <string>
class Solution {
public:
    int convertTime(string current, string correct) {
        int currMin = (stoi(current.substr(0, 2)) * 60) + stoi(current.substr(3, 2));
        int corMin = (stoi(correct.substr(0, 2)) * 60) + stoi(correct.substr(3, 2));
        int ops = 0;
        
        while(currMin != corMin){
            if(corMin - 60 >= currMin){
                corMin -= 60;
                ops++;
            } else if(corMin - 15 >= currMin){
                corMin -= 15;
                ops++;
            } else if(corMin - 5 >= currMin){
                corMin -= 5;
                ops++;
            } else {
                corMin -= 1;
                ops++;
            }
        }
        return ops;                                                
    }
};