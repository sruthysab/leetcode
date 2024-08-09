class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sumSingle = 0;
        int sumDouble = 0;
        
        for(int num : nums){
            if(num > 0 && num <= 9){
                sumSingle += num;
            } else if(num > 9){
                sumDouble += num;
            }
        }
        
        if(sumSingle > sumDouble || sumDouble > sumSingle){
            return true;
        }
        return false;
    }
};