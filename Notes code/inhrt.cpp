#include <iostream>
using namespace std;

class Time {
    int hour, min;
public:
    // Constructor with default values
    Time(int hour = 0, int min = 0) : hour(hour), min(min) {}

    // Add function to sum two Time objects
    Time add( Time obj) {
        Time result;
        result.min = min + obj.min;  // Add the minutes
        result.hour = hour + obj.hour;  // Add the hours
        
        // Adjust for overflow if minutes are 60 or more
        if (result.min >= 60) {
            result.hour += result.min / 60;  // Add overflow hours
            result.min %= 60;  // Keep minutes less than 60
        }
        
        return result;
    
    }

    // Display function to print time in hh:mm format
    void disp()      {
        cout << hour << " hours " << min << " minutes" << endl;
    }

};

int main() {
    Time t1(3, 45), t2(2, 55), t3;
    t3 = t1.add(t2);  // Add t1 and t2, store result in t3
    t3.disp();  // Display the result

    return 0;
}
