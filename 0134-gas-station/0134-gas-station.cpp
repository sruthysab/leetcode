class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gasSum = 0, costSum = 0, currentGas = 0, startStation = 0;
        for(int i = 0; i < cost.size(); i++){
            gasSum += gas[i];
            costSum += cost[i];
            currentGas += gas[i] - cost[i];
            if(currentGas < 0){
                startStation = i + 1;
                currentGas = 0;
            }
        }
        
        
        if(gasSum < costSum){
            return -1;
        }
        
    
        return startStation;
    }
};