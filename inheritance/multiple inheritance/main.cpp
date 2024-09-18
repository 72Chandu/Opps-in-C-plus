#include<iostream>
using namespace std;
class student {
protected:
    int rollno;
public:
    void get_number(int);
    void put_number();
};
void student::get_number(int a) {
    rollno = a;
}
void student::put_number() {
    cout << "Roll number: " << rollno << endl;
}

class test: public student { // First level derivation
protected:
    float sub1;
    float sub2;
public:
    void get_marks(float, float);
    void put_marks();
};
void test::get_marks(float x, float y) {
    sub1 = x;
    sub2 = y;
}
void test::put_marks() {
    cout << "Marks in sub1: " << sub1 << endl;
    cout << "Marks in sub2: " << sub2 << endl;
}

class result: public test { // Second level derivation
    float total;
public:
    void display();
};
void result::display() {
    total = sub1 + sub2;
    put_number(); // Accessing base class member function
    put_marks(); // Accessing base class member function
    cout << "Total marks: " << total << endl;
}

int main() {
    result student1;
    student1.get_number(111);
    student1.get_marks(75.0, 59.5);
    student1.display();
    return 0;
}
