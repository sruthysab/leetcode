class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex == 0) return {1};
        if(rowIndex == 1) return {1, 1};
        
        int r = 2;
        vector<int> result = {1, 1};
        while(r < rowIndex+1){
            vector<int> newR(r+1, 1);
            for(int j = 1; j < r; j++){
                newR[j] = result[j-1] + result[j];
            }
            result = newR;
            r++;
        }
        return result;
    }
};