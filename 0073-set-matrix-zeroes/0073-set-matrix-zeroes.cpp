class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //set markers in first row and first column for zeroes
        bool firCol = false;
        bool firRow = false;
        
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    if(i == 0) firRow = true;
                    if(j == 0) firCol = true;
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        
        //fill in the inner matrix exlcuding the first row and first column
        for(int i = 1; i < matrix.size(); i++){
            for(int j = 1; j < matrix[0].size(); j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){ //check if zero in that col or row head
                    matrix[i][j] = 0;
                }
            }
        }
        
        //fill in zeros for first col, if any
        if(firRow){
            for(int j = 0; j < matrix[0].size(); j++){
                matrix[0][j] = 0;
            }
        }
        
        //fill in zeros for first row, if any
        if(firCol){
            for(int i = 0; i < matrix.size(); i++){
                matrix[i][0] = 0;
            }
        }
    }
};