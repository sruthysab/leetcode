using namespace std; 

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++; // increment the current digit and return
                return digits;
            }
            digits[i] = 0; // set the current digit to 0 and carry over
        }

        //means all digits were 9
        digits.insert(digits.begin(), 1); // add new leading 1
        return digits;
    }
};