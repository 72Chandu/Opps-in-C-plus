#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    // Public member function to set the student's name
    void setName(string n) {
        name = n;
    }

    // Public member function to set the student's age
    void setAge(int a) {
        age = a;
    }

    // Public member function to display the student's information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create an object of the Student class
    Student s;

    // Access and set private data members using public member functions
    s.setName("John");
    s.setAge(20);

    // Display student information using a public member function
    s.displayInfo();

    return 0;
}

