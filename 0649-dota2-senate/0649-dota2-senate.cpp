class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> dire, radiant;
        
        for(int i = 0; i < senate.length(); i++){
            if(senate[i] == 'D'){
                dire.push(i);
            } else {
                radiant.push(i);
            }
        }
        
        while(!radiant.empty() && !dire.empty()){
            int index_r = radiant.front();
            int index_d = dire.front();
            
            if(index_r < index_d){
                dire.pop();
                radiant.pop();
                
                // add for next round
                radiant.push(index_r + senate.length());
            } else {
                radiant.pop();
                dire.pop();
                
                //add back for the next round
                dire.push(index_d + senate.length());
            }
        }
        
        return dire.empty() ? "Radiant" : "Dire";
    }
};