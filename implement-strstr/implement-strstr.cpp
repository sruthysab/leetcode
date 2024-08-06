class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length() > haystack.length()){
            return -1;
        }
        
        for(int i = 0; i < haystack.length(); i++){
            int k = i;
            int j = 0;
            while(haystack[k] == needle[j] && j < needle.length()){
                k++;
                j++;
            }
            if(j == needle.length()) return i;
        }
        return -1;
        
    }
};