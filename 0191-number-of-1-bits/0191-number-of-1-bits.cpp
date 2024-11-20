#include <iostream>
#include <bitset>
class Solution {
public:
    string convertToSetbits(int n){
        bitset<32> binary(n); 
        return binary.to_string();
    }
    
    int hammingWeight(int n) {
        int count = 0;
        string result = convertToSetbits(n);
        for(char c : result){
            if(c == '1'){
                count++;
            }
        }
        return count;
    }
};