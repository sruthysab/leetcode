class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // Utilize istringstream to split the string into words
        istringstream strStream(s);
        vector<string> words;
        string word;
      
        // Splitting the string by whitespaces
        while (strStream >> word) {
            words.push_back(word);
        }
      
        // If the number of pattern characters and words do not match, return false
        if (pattern.size() != words.size()) {
            return false;
        }
      
        // Create mappings to keep track of the pattern to word relationships
        unordered_map<char, string> patternToWord;
        unordered_map<string, char> wordToPattern;
      
        // Iterate through the pattern and corresponding words
        for (int i = 0; i < words.size(); ++i) {
            char patternChar = pattern[i];
            string currentWord = words[i];
          
            // Check if the current pattern character has already been mapped to a different word
            // or the current word has been mapped to a different pattern character
            if ((patternToWord.count(patternChar) && patternToWord[patternChar] != currentWord) ||
                (wordToPattern.count(currentWord) && wordToPattern[currentWord] != patternChar)) {
                return false;
            }
          
            // Map the current pattern character to the current word and vice versa
            patternToWord[patternChar] = currentWord;
            wordToPattern[currentWord] = patternChar;
        }
      
        // If all pattern characters and words match up, return true
        return true;
    }
};