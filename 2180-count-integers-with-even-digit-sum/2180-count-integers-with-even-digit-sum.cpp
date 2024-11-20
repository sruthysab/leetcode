class Solution {
public:
    bool digitSum(int num){
        int sum = 0;
        int n = num;
        while(num != 0){
            int digit = num%10;
            sum += digit;
            num /= 10;
        }
        return (sum%2==0) ? true : false;
    }
    
    int countEven(int num) {
        int count = 0; // maybe need to possibly account for integer overflow
        for(int i = 1; i <= num; i++){
            if(digitSum(i)){
                count++;
            }
        }
        return count;
    }
};