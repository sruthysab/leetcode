#include <sstream>
using namespace std;

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        //splits into strings
        string word;
        vector<string> result;
        unordered_map<string, int> uncommon;
        
        istringstream stream1(s1);
        while(stream1 >> word){
            uncommon[word]++;
        }
        
        istringstream stream2(s2);
        while(stream2 >> word){
            uncommon[word]++;
        }
        
        for(auto& pair : uncommon){
            if(pair.second == 1){
                result.push_back(pair.first);
            }
        }
        return result;
    }
};