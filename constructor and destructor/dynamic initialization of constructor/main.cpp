#include<iostream>
using namespace std;

class fixed_deposit {
    long int principal_amount;
    int years;
    float rate;
    float return_value;

public:
    fixed_deposit(){}
    fixed_deposit(long int p, int y, float r = 0.12);
    fixed_deposit(long int p, int y, int r);
    void display();
};

fixed_deposit::fixed_deposit(long int p, int y, float r) {
    principal_amount = p;
    years = y;
    rate = r;
    return_value = principal_amount;
    for (int i = 1; i <= y; i++) {
        return_value = return_value * (1.0 + r / 100);
    }
}

void fixed_deposit::display() {
    cout << "Principal amount = " << principal_amount << " Return value = " << return_value << endl;
}

fixed_deposit::fixed_deposit(long int p, int y, int r) {
    principal_amount = p;
    years = y;
    rate = float(r) / 100;
    return_value = principal_amount;
    for (int i = 1; i <= y; i++) {
        return_value = return_value * (1.0 + rate);
    }
}

int main() {
    fixed_deposit f1, f2, f3;
    long principal_amount;
    int years;
    float rate;
    int ratePer;

    cout << "Enter principal amount, years, and rate percent for f1: ";
    cin >> principal_amount >> years >> ratePer;
    f1 = fixed_deposit(principal_amount, years, ratePer);

    cout << "Enter principal amount, years, and rate for f2: ";
    cin >> principal_amount >> years >> rate;
    f2 = fixed_deposit(principal_amount, years, rate);

    cout << "Enter principal amount and years for f3: ";
    cin >> principal_amount >> years;
    f3 = fixed_deposit(principal_amount, years);

    cout << "Details for f1: ";
    f1.display();
    cout << "Details for f2: ";
    f2.display();
    cout << "Details for f3: ";
    f3.display();

    return 0;
}
