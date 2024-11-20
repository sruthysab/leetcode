#include <bitset>
#include <string>
#include <iostream>
#include <cmath>

class Solution {
public:
    string convertBinary(int num){
        bitset<32> binary(num);
        return binary.to_string();
    }
    
    bool isPrime(int num){
        if (num <= 1) return false;  // 0 and 1 are not prime
        if (num == 2) return true;   // 2 is prime
    
        // Check if the number is divisible by any number from 2 to sqrt(num)
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                return false;  // num is divisible by i, so it's not prime
            }
        }
        return true;
    }
    
    bool checkBitsetPrime(string binary){
        int count = 0;
        for(char c : binary){
            if(c == '1'){
                count++;
            }
        }
        return isPrime(count);
    }
    
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int i = left; i <= right; i++){
            string binary = convertBinary(i);
            if(checkBitsetPrime(binary)){
                count++;
            }
        }
        return count;
    }
};