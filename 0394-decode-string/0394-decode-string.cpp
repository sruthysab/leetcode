class Solution {
public:
    string decodeString(string s) {
        stack<char> decoded;
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ']'){
                decoded.push(s[i]);
            }else{
                string letters = "";
                while(!decoded.empty() && decoded.top() != '['){
                    letters += decoded.top();
                    decoded.pop();
                }
                decoded.pop(); // actually pop the open arrow
                
                string numbers = "";
                while(!decoded.empty() && isdigit(decoded.top())){
                    numbers += decoded.top();
                    decoded.pop();
                }
                
                reverse(letters.begin(), letters.end()); //reverse string of letters
                reverse(numbers.begin(), numbers.end()); //reverse string of numbers
                
                int repeatCount = stoi(numbers); // convert string to int

                string repeated = ""; //create new repeated string
                for (int j = 0; j < repeatCount; j++) {
                    repeated += letters;
                }

                for (char c : repeated) { //push repeated string into stack
                    decoded.push(c);
                }
            }
        }
        
        string result = "";
        while (!decoded.empty()) {
            result.push_back(decoded.top());
            decoded.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};