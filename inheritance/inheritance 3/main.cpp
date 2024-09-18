#include <iostream>
using namespace std;

class Base1 {
public:
    void publicDisplay() {
        cout << "Base1 public display" << endl;
    }
protected:
    void protectedDisplay() {
        cout << "Base1 protected display" << endl;
    }
};

class Base2 {
public:
    void publicDisplay() {
        cout << "Base2 public display" << endl;
    }
protected:
    void protectedDisplay() {
        cout << "Base2 protected display" << endl;
    }
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    void display() {
        // Resolve ambiguity by specifying the base class
        Base1::publicDisplay();     // Access Base1's publicDisplay
        Base2::publicDisplay();     // Access Base2's publicDisplay

        // Resolve ambiguity by specifying the base class
        Base1::protectedDisplay();  // Access Base1's protectedDisplay
        Base2::protectedDisplay();  // Access Base2's protectedDisplay
    }
};

int main() {
    Derived d;
    
    // Accessing the display function of Derived class
    d.display();

    // Accessing public members of Base1 and Base2 directly through Derived class
    d.Base1::publicDisplay();
    d.Base2::publicDisplay();

    return 0;
}
