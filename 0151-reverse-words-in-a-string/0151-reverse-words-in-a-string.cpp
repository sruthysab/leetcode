class Solution {
public:
    string reverseWords(string s) {
        // Step 1: Reverse the entire string
        reverse(s.begin(), s.end());

        int L = 0;  // Left pointer for each word
        int R = 0;  // Right pointer for constructing the result
        int i = 0;

        // Step 2: Traverse through the string
        while (i < s.length()) {
            // Skip any leading spaces
            while (i < s.length() && s[i] == ' ') i++;

            if (i == s.length()) break;  // End of string, break

            // Start of a word
            L = R;  // Start of the word in the final result
            
            // Copy the current word
            while (i < s.length() && s[i] != ' ') {
                s[R++] = s[i++];
            }
            
            // Step 3: Reverse the current word
            reverse(s.begin() + L, s.begin() + R);

            // Add a space after the word
            if (i < s.length()) {
                s[R++] = ' ';
            }
        }

        // Step 4: Resize to remove any trailing space
        if (R > 0 && s[R-1] == ' ') {
            s.resize(R - 1);  // Remove the last space
        } else {
            s.resize(R);
        }

        return s;
    }
};

 