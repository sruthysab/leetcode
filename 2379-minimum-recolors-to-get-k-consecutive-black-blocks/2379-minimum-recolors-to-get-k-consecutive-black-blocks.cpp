class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        // can we assume k will always be less than the length of blocks
        vector<string> blockSubstr;
        for(int i = 0; i<blocks.length(); i++){
            if(i + k <= blocks.length()){
                blockSubstr.push_back(blocks.substr(i, k));
            }
        }
        int minC = INT_MAX;
        for(string block : blockSubstr){
            int count = 0;
            for(char W : block){
                if(W == 'W'){
                    count++;
                }
            }
            minC = min(minC, count);
        }
        
        return minC;
    }
};