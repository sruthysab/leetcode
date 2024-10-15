class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occur;
        unordered_set<int> nonDupes;
        
        for(int num : arr){
            occur[num]++;
        }
        
        for(const auto& pair: occur){
            if(nonDupes.find(pair.second) != nonDupes.end()){
                return false;
            }
            nonDupes.insert(pair.second);
        }
        return true;
    }
};