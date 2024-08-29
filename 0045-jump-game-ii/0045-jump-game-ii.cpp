class Solution {
public:
    int jump(vector<int>& nums) {
        int L = 0;
        int R = 0;
        long long result = 0;
        
        while(R < nums.size()-1){
            int farthest = 0;
            for(int i = L; i < R+1; i++){
                farthest = max(farthest, i + nums[i]);
            }
            L = R+1;
            R = farthest;
            result++;
        }
        
        return result;
    }
};