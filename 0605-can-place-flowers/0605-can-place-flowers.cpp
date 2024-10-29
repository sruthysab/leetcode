class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();
        
        // Edge case for flowerbed of length 1
        if (len == 1) {
            if (flowerbed[0] == 0 && n <= 1) {
                return true;
            }
            return n == 0;
        } else if (n == 0){
            return true;
        }
        
        for (int i = 0; i < len; i++) {
            if (flowerbed[i] == 0) {
                bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0);
                bool rightEmpty = (i == len - 1 || flowerbed[i + 1] == 0);

                if (leftEmpty && rightEmpty) {
                    flowerbed[i] = 1;  // Place flower
                    n--;
                
                    // Early exit if we've placed enough flowers
                    if (n == 0) {
                        return true;
                    }
                
                    i++;  // Skip the next spot as it can't be planted
                }
            }
        }
        
        return n == 0;
    }
};