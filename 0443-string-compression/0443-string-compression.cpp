class Solution {
public:
    int compress(vector<char>& chars) {
        int writeIndex = 0;
        int count = 1;
        
        for(int i = 1; i < chars.size(); i++){
            if(chars[i] == chars[i-1]){
                count++;
            } else {
                chars[writeIndex] = chars[i-1];
                writeIndex++;
                if(count > 1){
                    for(char c : to_string(count)){
                        chars[writeIndex] = c;
                        writeIndex++;
                    }
                }
                count = 1;
            }
        }
        
        chars[writeIndex] = chars.back();
        writeIndex++;
        if(count > 1){
            for(char c : to_string(count)){
                chars[writeIndex] = c;
                writeIndex++;
            }
        }
        
        return writeIndex;
        
    }
};