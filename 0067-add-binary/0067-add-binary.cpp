class Solution {
public:
    string addBinary(string a, string b) {
        // string - string yeilds the number
        // integer + string yeilds the number in string form
        int carry = 0;
        string result = "";
        int i = a.length()-1;
        int j = b.length()-1;
        while(i >= 0 || j >= 0 || carry > 0){
            int sum = carry;
            if(i >= 0){
                sum += a[i] - '0';
                i--;
            }
            if(j >= 0){
                sum += b[j] - '0';
                j--;
            }
            result += (sum%2) + '0';
            carry = sum/2;
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};