class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<int> countLetters;
        for(char c : s){
            if(countLetters.find(c) != countLetters.end()){
                return c;
            }
            countLetters.insert(c);
        }
        return 'n';
    }
};