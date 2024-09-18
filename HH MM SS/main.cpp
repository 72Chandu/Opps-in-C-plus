/*User
create a class time that has a seprate integer member data for hours minute and second. one method 
initialize it to fixed value a member function should display it in HH.MM.SS formate the final two number
function should add and substract two object of time passed as argument a main program should create two initialize time object finally it should add the two initialized object storing the result in third time object finally it should display the value of the third time object  */
#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}// Constructor
    void initialize(int h, int m, int s) {// Method to initialize time
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display() { // Method to display time in HH:MM:SS format
        cout << hours << "." << minutes << "." << seconds;
    }
    Time add(Time& other) { // Method to add two time objects
        int total_seconds = seconds + other.seconds;
        int carry_minutes = total_seconds / 60;
        int remaining_seconds = total_seconds % 60;

        int total_minutes = minutes + other.minutes + carry_minutes;
        int carry_hours = total_minutes / 60;
        int remaining_minutes = total_minutes % 60;

        int total_hours = hours + other.hours + carry_hours;

        return Time(total_hours, remaining_minutes, remaining_seconds);
    }
    Time subtract(Time& other) { // Method to subtract two time objects
        int total_seconds = seconds - other.seconds;
        int carry_minutes = 0;
        if (total_seconds < 0) {
            total_seconds += 60;
            carry_minutes = 1;
        }
        int total_minutes = minutes - other.minutes - carry_minutes;
        int carry_hours = 0;
        if (total_minutes < 0) {
            total_minutes += 60;
            carry_hours = 1;
        }
        int total_hours = hours - other.hours - carry_hours;
        return Time(total_hours, total_minutes, total_seconds);
    }
};

int main() {
    Time t1, t2, t3;
    t1.initialize(10, 45, 30); // Initialize two time objects
    t2.initialize(3, 20, 15);
    cout << "First time: ";
    t1.display();
    cout <<endl;
    cout << "Second time: ";
    t2.display();
    cout <<endl;
    t3 = t1.add(t2);// Add two time objects and store result in t3
    cout << "Sum of the two times: ";
    t3.display();
    cout <<endl;
    t3 = t1.subtract(t2);// Subtract two time objects and store result in t3
    cout << "Difference of the two times: ";
    t3.display();
    cout <<endl;
    return 0;
}

