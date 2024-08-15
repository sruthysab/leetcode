class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int time) {
        int start = 0;
        int end = 0;
        int clipCount = 0;
        
        while(start < time){
            for(auto& clip : clips){
                if(start >= clip[0]){
                    end = max(end, clip[1]);
                }
            }
            if(end == start){
                return -1;
            }
            clipCount++;
            start = end;
        }
        return clipCount;
    }
};