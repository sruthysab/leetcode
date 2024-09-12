class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> ss;  // Use set<char> to store characters
        int L = 0, longest = 0;  // Initialize 'longest' to 0

        for (int R = 0; R < s.length(); R++) {  // R is the index, not the character itself
            while (ss.find(s[R]) != ss.end()) {  // If s[R] is already in the set
                ss.erase(s[L]);  // Remove the character at the 'L' pointer
                L++;  // Move the left pointer to the right
            }
            ss.insert(s[R]);  // Insert the current character into the set
            int w = R - L + 1;  // Calculate the window size
            longest = max(longest, w);  // Update the longest length
        }

        return longest;
    }
};