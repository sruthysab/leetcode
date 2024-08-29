class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // Use char as the key type for unordered_map
        std::unordered_map<char, int> noDupe;
    
        // Count the characters in magazine
        for (int i = 0; i < magazine.length(); i++) {
            noDupe[magazine[i]]++;
        }
    
        // Check if ransomNote can be constructed
        for (int j = 0; j < ransomNote.size(); j++) {
            char currentChar = ransomNote[j];
        
            // Check if the current character can be constructed
            if (noDupe[currentChar] == 0) {
                return false; // Not enough characters
            }
        
            // Use one instance of the character
            noDupe[currentChar]--;
        }
    
        return true; // All characters in ransomNote can be constructed
    }
};