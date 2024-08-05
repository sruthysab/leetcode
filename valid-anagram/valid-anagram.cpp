class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> temp;
        for(char c : s){
            temp[c]++;
        }
        
        for(char c: t){
            if(temp.find(c) != temp.end() && temp[c] > 0){
                temp[c]--;
            }else{
                return false;
            }
        }
        
        for(pair c : temp){
            if(c.second != 0){
                return false;
            }
        }
        return true;
    }
};