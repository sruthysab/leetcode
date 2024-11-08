class Solution {
public:
    bool isAnagram(string s, string t) {
        
        //handle Unicode characters
        // For comprehensive Unicode and locale-aware sorting, the ICU (International //Components for Unicode) library is a good choice. ICU provides a Collator class that allows //locale-sensitive
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s == t);
    }
};