class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;
        
        unordered_map<char,char>isoS,isoT;
        

        for(int i = 0 ; i < s.size() ; i++){
            char currS = s[i];
            char currT = t[i];

            if(isoS.find(currS) != isoS.end()){
                if(currT != isoS[currS]){
                    return false;
                }
            }else if(isoT.find(currT) != isoT.end()){
                    return false;
                
            }
  
            isoS[currS] = currT;
            isoT[currT] = currS;
            
        }
        return true;
    
    }
};