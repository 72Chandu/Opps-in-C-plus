/*Suppose you have a piggy bank with an initial amount of ₹50 and you have to add some more amount to it. Create a 
class addamount with a data member named amount with an initial value of ₹50. Now make two constructors of this class as follows: 
1. Without any parameter- no amount will be added to the piggy bank. 
2. Having a parameter which is the amount that will be added to the piggy bank.*/
#include <iostream>
using namespace std;
class addamount {
private:
    int amount;
public:
    addamount() { // Constructor without any parameter
        amount = 50; // Initial amount set to ₹50
    }
    addamount(int additionalAmount) {  // Constructor with a parameter to add amount
        amount = 50 + additionalAmount; // Initial amount plus additional amount
    }
    void displayAmount() {
        cout << "Current amount in the piggy bank: ₹"<<amount<<endl;
    }
};
int main() {
    addamount piggyBank1; // Constructor without any parameter
    addamount piggyBank2(30); // Constructor with a parameter

    piggyBank1.displayAmount(); // Should display ₹50
    piggyBank2.displayAmount(); // Should display ₹80
    return 0;
}

