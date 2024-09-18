#include<iostream>
using namespace std;

class item {
    int number; // private by default
    float cost;

public:
    void getdata(int a, float b); // prototype declaration to be defined
    void putdata(void) { // function defined inside the class
        cout << "Number: " << number << endl;
        cout << "Cost: " << cost << endl;
    }
};

void item::getdata(int a, float b) { // member function definition of class item
    number = a; // private variable directly used
    cost = b;
}

int main() {
    item x; // create object x
    x.getdata(100, 299.95); // call member function with corrected arguments
    x.putdata(); // call member function
    return 0;
}
