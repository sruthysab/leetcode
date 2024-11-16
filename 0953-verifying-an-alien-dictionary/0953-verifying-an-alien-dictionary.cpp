class Solution {
private:
    bool checkCharRank(const string& a, const string& b, unordered_map<char, int>& charRank){
        int minLen = min(a.length(), b.length());
        for(int i = 0; i < minLen; i++){
            if(a[i] != b[i]){
                return charRank[a[i]] < charRank[b[i]];
            }
        }
        return a.length() <= b.length();
    }
public:
    bool isAlienSorted(vector<string>& words, string order) {
        //what to return if vector is empty or has 1 string
        if(words.size()<=1) return true;
        
        unordered_map<char, int> charRank;
        for(int i = 0; i < order.length(); i++){
            charRank[order[i]] = i;
        }
        
        for(int i = 1; i < words.size(); i++){
            if(!checkCharRank(words[i-1], words[i], charRank)){
                return false;
            }
        }
        return true;
    }
};