class Solution {
public:
    //create helper function to get the next sum
    int helperSum(int n){
        int sum = 0;
        while(n>0){
            int digit = n % 10;
            sum += digit*digit;
            n /= 10;
        }
        return sum;
        
    }
    
    bool isHappy(int n) {
        unordered_set<int> cycle;
        while(n != 1 && cycle.find(n) == cycle.end()){
            cycle.insert(n);
            n = helperSum(n);
        }
        return n==1;
    }
};