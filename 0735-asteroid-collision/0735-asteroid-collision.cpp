class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> collision;
        
        for(int i = 0; i < asteroids.size(); i++){
            bool currDestroyed = false; // keep track of whether current asteroid get destroyed
            
            while(!collision.empty() && collision.top() > 0 && asteroids[i] < 0){
                if(collision.top() < -asteroids[i]){ // asteroid in the stack destroyed bc smaller
                    collision.pop();
                } else if(collision.top() == -asteroids[i]){ // both equal
                    collision.pop();
                    cout << "set to true" << asteroids[i] << endl;
                    currDestroyed = true;
                    break;
                } else {
                    cout << "also set to true" << asteroids[i] << endl;
                    currDestroyed = true; //current asteroid destroyed bc asteroid in stack larger
                    break;
                }
            }
            
            if(!currDestroyed){ // if curr asteroid not destroyed add to the stack
                collision.push(asteroids[i]);
            }
        }
        
        vector<int> result;
        while(!collision.empty()){
            result.push_back(collision.top());
            collision.pop();
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};