class Solution {
public:
    char findTheDifference(string s, string t) {
        //what if both strings are the same
        // can we assume t will always be bigger than s
        unordered_map<char, int> charCount;

        for(char c : s){
            charCount[c]++;
        }
        
        for(char c : t){
            charCount[c]--;
        }
        
        for(auto& pair : charCount){
            // case when same characters
            if(pair.second == -1){
                return pair.first;
            }
            
        }
        return 'd';
    }
};