class Solution {
public:
    bool closeStrings(string word1, string word2) {
        // Check if lengths are different
        if(word1.length() != word2.length()) {
            return false;
        }
        
        // Frequency maps for characters in both words
        unordered_map<char, int> map1, map2;
        
        // Count frequencies of characters in both words
        for(int i = 0; i < word1.length(); i++) {
            map1[word1[i]]++;
            map2[word2[i]]++;
        }
        
        // Check if both words have the same unique characters
        for(auto& pair : map1) {
            if(map2.find(pair.first) == map2.end()) {
                return false;
            }
        }
        
        for(auto& pair : map2) {
            if(map1.find(pair.first) == map1.end()) {
                return false;
            }
        }
        
        // Count frequency of frequencies for each word
        unordered_map<int, int> freq1, freq2;
        for(auto& pair : map1) {
            freq1[pair.second]++;
        }
        for(auto& pair : map2) {
            freq2[pair.second]++;
        }
        
        // Check if frequency distributions match
        if(freq1 != freq2) {
            return false;
        }
        
        return true;
        
        
    }
};