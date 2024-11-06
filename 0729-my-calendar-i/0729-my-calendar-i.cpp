class MyCalendar {
private:
    vector<vector<int>> bookings;
    vector<bool> result;
public:
    MyCalendar() {
        result.push_back(false); // can't put null in bool vector
    }
    
    // can we assume endTime will always be greater than startTime
    bool book(int startTime, int endTime) {
        for(auto& booking : bookings){
            if(startTime < booking[1] && endTime > booking[0]){
                result.push_back(false);
                return false;
            }
        }
        bookings.push_back({startTime, endTime});
        result.push_back(true);
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */