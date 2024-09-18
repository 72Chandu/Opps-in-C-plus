#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imaginary;
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}// Constructor
    Complex add(const Complex& other) const {// Method to add two complex numbers
        return Complex(real + other.real, imaginary + other.imaginary);
    }
    void display() const { // Method to display complex number
        if (imaginary < 0) cout << real << " - " << -imaginary << "i";
        else cout << real << " + " << imaginary << "i";
    }
};
int main() {
    Complex num1(3.0, 2.0);
    Complex num2(1.5, -1.0);
    cout << "First complex number: ";
    num1.display();
    cout <<endl;
    cout << "Second complex number: ";
    num2.display();
    cout <<endl;
    Complex sum = num1.add(num2);
    cout << "Sum of the two complex numbers: ";
    sum.display();
    cout <<endl;
    return 0;
}

