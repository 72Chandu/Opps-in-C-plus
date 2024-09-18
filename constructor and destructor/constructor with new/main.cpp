#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class String { // Renamed class from 'string' to 'String' to avoid conflict with standard library
    char *name;
    int length;
public:
    String() {
        length = 0;
        name = new char[length + 1];
        strcpy(name, "");
    }

    String(const char *s) {
        length = strlen(s);
        name = new char[length + 1];
        strcpy(name, s);
    }

    void display() {
        cout << name << endl;
    }

    void join(String &a, String &b) {
        length = a.length + b.length;
        delete[] name;
        name = new char[length + 1];
        strcpy(name, a.name);
        strcat(name, b.name);
    }

    ~String() { // Destructor to free memory
        delete[] name;
    }
};

int main() {
    const char *f = "chandu";
    String name1(f), name2("dfdf"), name3("tyy"), s1, s2;
    s1.join(name1, name2);
    s2.join(s1, name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();
    return 0;
}
