class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result; // create a result vector
        int i = 0;             

        while (i < nums.size()) {
            int start = nums[i]; //set the start range

            // Iterate while the next number is consecutive
            while (i + 1 < nums.size() && nums[i] + 1 == nums[i + 1]) { // check if the curr and next number are the same
                i++; //move through the interval
            }

            int end = nums[i];  //when the while exits save the last i value as the end

            if (start == end) { //this is the case where its the same number
                result.push_back(to_string(start));
            } else { 
                result.push_back(to_string(start) + "->" + to_string(end));
            }

            i++;  
        }

        return result;
    }
};