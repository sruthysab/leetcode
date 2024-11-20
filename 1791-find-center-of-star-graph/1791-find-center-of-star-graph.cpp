class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        /*
        unordered_map<int, int> edgeCount;
        for(const auto& vec : edges){
            edgeCount[vec[0]]++;
            edgeCount[vec[1]]++;
        }
        
        for(const auto& pair : edgeCount){
            if(pair.second == edges.size()){
                return pair.first;
            }
        }
        */
        return edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1] ? edges[0][0] : edges[0][1];
    }
};