#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int employeeId;
    string name;
    int age;
    string phoneNumber;

public:
    // Function to set employee details
    void setDetails(int id, string n, int a, string phone) {
        employeeId = id;
        name = n;
        age = a;
        phoneNumber = phone;
    }

    // Function to display employee details
    void displayDetails() {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    }
};

int main() {
    // Create an array of Employee objects to store multiple employees
    const int MAX_EMPLOYEES = 2; // You can change the number of employees here
    Employee employees[MAX_EMPLOYEES];

    // Enter employee information
    for (int i = 0; i < MAX_EMPLOYEES; ++i) {
        int id, age;
        string name, phone;

        cout << "\nEnter details for employee " << i + 1 << ":" << endl;
        cout << "Employee ID: ";
        cin >> id;
        cin.ignore(); // Clear the input buffer
        cout << "Name: ";
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cout << "Phone Number: ";
        cin >> phone;

        employees[i].setDetails(id, name, age, phone);
    }

    // Display employee information
    cout << "\nEmployee Information:" << endl;
    for (int i = 0; i < MAX_EMPLOYEES; ++i) {
        cout << "\nEmployee " << i + 1 << ":" << endl;
        employees[i].displayDetails();
    }

    return 0;
}

