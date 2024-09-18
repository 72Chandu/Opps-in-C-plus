#include <iostream>
#include <cstring> // Include <cstring> for strlen and strcpy

using namespace std;

class city {
protected:
    char *name;
    int len;
public:
    // Constructor
    city() {
        len = 0;
        name = nullptr; // Initialize name to nullptr
    }

    // Destructor to release memory
    ~city() {
        delete[] name;
    }

    void getname() {
        char s[30]; // Use a fixed-size array instead of dynamically allocating memory
        cout << "Enter city name: ";
        cin >> s;
        len = strlen(s);
        // Release previous memory if name is not nullptr
        if (name != nullptr) {
            delete[] name;
        }
        // Allocate memory for name and copy the string
        name = new char[len + 1];
        strcpy(name, s);
    }

    void print() {
        if (name != nullptr) {
            cout << name << endl;
        }
    }
};

int main() {
    city *cptr[10];
    int n = 0; // Initialize n to 0
    int option;
    do {
        cptr[n] = new city;
        cptr[n]->getname();
        n++;
        cout << "Do you want to enter one more name?" << endl;
        cout << "Enter 1 for yes or 0 for no: ";
        cin >> option;
    } while (option);
    cout << endl;
    for (int i = 0; i < n; i++) { // Correct the loop condition
        cptr[i]->print();
    }
    // Delete dynamically allocated memory
    for (int i = 0; i < n; i++) {
        delete cptr[i];
    }
    return 0;
}
