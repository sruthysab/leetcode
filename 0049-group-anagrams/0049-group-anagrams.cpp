class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // should the smaller vectors be ordered by size?
    
        unordered_map<string, vector<string>> anagramMap;
        vector<vector<string>> result;
        for(string s : strs){
            string ss = s;
            sort(ss.begin(), ss.end());
            anagramMap[ss].push_back(s);
        }
        
        //then loop through anagramMao of sorted string mapped to vector of the og strings
        for(auto& pair : anagramMap){
            result.push_back(pair.second);
        }

        return result;
    }
};