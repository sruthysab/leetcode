class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        //turn all nums to string
        vector<string> strNums;
        for(int num : nums){
            strNums.push_back(to_string(num));
        }

        //sort using lambda function to compare a+b > b+a
        sort(strNums.begin(), strNums.end(),
        [](const string& a, const string& b) {
            return a + b > b + a;
        });

        if(strNums[0] == "0"){
            return "0";
        }

        string result = "";
        for(string str : strNums){
            result += str;
        }
        return result;
    }
};