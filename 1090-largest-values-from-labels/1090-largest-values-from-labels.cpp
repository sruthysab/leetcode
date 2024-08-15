using namespace std;

class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        unordered_map<int, int> limitCheck;
        vector<pair<int, int>> valuesLabelsPair;
        int count = 0;
        int maxSum = 0;
        
        for(int i = 0; i < values.size(); i++){
            valuesLabelsPair.push_back(make_pair(values[i], labels[i]));
        }
        
        sort(valuesLabelsPair.rbegin(), valuesLabelsPair.rend());
        
        for(auto& pair : valuesLabelsPair){
            if(limitCheck[pair.second] < useLimit && count < numWanted){
                limitCheck[pair.second]++;
                maxSum += pair.first;
                count++;
            }
            
        }
        
        return maxSum;
   
    }
};