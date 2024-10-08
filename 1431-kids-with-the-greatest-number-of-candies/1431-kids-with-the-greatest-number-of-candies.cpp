class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> result(candies.size());
        
        int max = 0;
        for(int candy : candies){
            if(candy > max){
                max = candy;
            }
        }
        
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= max){
                result[i] = true;
            } else {
                result[i] = false;
            }
            
        }
        return result;
    }
};