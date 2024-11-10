class Solution {
public:
    // do we need to add 1 if count is is less than 1
    int compress(vector<char>& chars) {
        if(chars.size() == 1) {
            return 1;
        }
      
        int charIndex = 0; // don't need 2 indexes
        int count = 1;
        //for loop through chars
        for(int i = 1; i < chars.size(); i++){
            if(chars[i] == chars[i-1]){
                count++; 
            } else {
                chars[charIndex++] = chars[i-1];
                if(count > 1){
                    string strC = to_string(count);
                    for(char c: strC){
                        chars[charIndex++] = c;
                    }
                    count = 1;
                }
                // have to loop through to_string(count) to insert each number as a char
            }
        }
        
        chars[charIndex++] = chars.back();
        if(count > 1){
            string strC = to_string(count);
            for(char c: strC){
                chars[charIndex++] = c;
            }
        }
    
        chars.resize(charIndex);
        return charIndex;
    }
};