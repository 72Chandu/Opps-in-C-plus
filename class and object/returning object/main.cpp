#include<iostream>
using namespace std;
class complex {
    float x;
    float y;
public:
    void input(float real, float img) { x = real; y = img; }
    friend complex sum(complex, complex);
    void show();
}; 

complex sum(complex c1, complex c2) {
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3; // Return object c3
}

void complex::show() {
    cout << x << "+i" << y << endl;
}

int main() {
    complex p, q, r;
    p.input(3.1, 5.45);
    q.input(23, 56);
    r = sum(p, q);
    cout << "p="; p.show();
    cout << "q="; q.show();
    cout << "r="; r.show();
    return 0;
}