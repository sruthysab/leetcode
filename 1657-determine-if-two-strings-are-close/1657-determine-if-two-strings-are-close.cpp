#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) {
            return false;
        }
        
        // Frequency maps for characters in both words
        unordered_map<char, int> map1, map2;
        unordered_map<int, int> freq1, freq2;
        
        // Count frequencies of characters in both words and check for unique character mismatch
        for (int i = 0; i < word1.length(); i++) {
            map1[word1[i]]++;
            map2[word2[i]]++;
        }
        
        // Check if both words have the same unique characters and populate frequency maps
        for (auto& pair : map1) {
            if (map2.find(pair.first) == map2.end()) {
                return false;  // Character in word1 not found in word2
            }
            freq1[pair.second]++;
        }
        
        for (auto& pair : map2) {
            if (map1.find(pair.first) == map1.end()) {
                return false;  // Character in word2 not found in word1
            }
            freq2[pair.second]++;
        }
        
        // Check if the frequency distributions match
        if (freq1 != freq2) {
            return false;
        }
        
        return true;
    }
};
