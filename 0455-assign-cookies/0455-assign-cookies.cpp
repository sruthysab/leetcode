#include <algorithm>
#include <vector>

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        int contentChildren = 0;
        
        for(int i = 0; i < g.size(); i++){
            int minCookieIndex = -1;
            for(int j = 0; j < s.size(); j++){
                if(s[j] >= g[i] && (minCookieIndex == -1 || s[minCookieIndex] > s[j])){
                    minCookieIndex = j;
                }
            }
            if(minCookieIndex != -1){
                contentChildren++;
                s.erase(s.begin() + minCookieIndex);
            }
        }
        
        
        return contentChildren;
    }
};