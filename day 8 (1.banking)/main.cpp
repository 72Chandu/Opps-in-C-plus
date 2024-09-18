/*Assume that a bank maintain 2 kinds of account for customber . one called as saving account and the other as current account . the saving account
provides compound intrest and withdrawal facilites but no cheque book facilty the current account provide cheque book facilty but no intrest
. current account holder should also mainten a minimum balance and if the balance falls below this level a service charge is inposed
create a class account that store customber name , account number and type of account from this derive the class curr_acct and sav_acct to make then more spacific
to their requirement include necessary member function in order to achive the following tassk
1-> accept deposite from the customber and update the balance
2->display the balance
3-> compute and deposite intrest
4->permit withdrawal and update the balance
5->cheque for minimum balance ,impose penalty necessary, ans update the balance
do not use constructor use member function to initialise the class member*/
#include <iostream>
using namespace std;
class Account {
protected:
    string customer_name;
    int account_number;
    string account_type;
    double balance;
public:
    void initialize(string name, int acc_number, string acc_type) {
        customer_name = name;
        account_number = acc_number;
        account_type = acc_type;
        balance = 0;
    }
    void accept_deposit(double amount) {
        balance += amount;
        cout << "Deposit accepted. New balance: " << balance << endl;
    }
    void display_balance() {
        cout << "Balance: " << balance << endl;
    }
    void compute_interest(double rate) {
        if (account_type == "saving") {
            double interest = balance * (rate / 100);
            balance += interest;
            cout << "Interest computed and deposited. New balance: " << balance << endl;
        }
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }
};
class CurrentAccount : public Account {
public:
    void check_minimum_balance(double min_balance, double penalty) {
        if (balance < min_balance) {
            cout << "Balance below minimum. Penalty imposed." << endl;
            balance -= penalty;
            cout << "New balance after penalty: " << balance << endl;
        }
    }
};
class SavingsAccount : public Account {
public:
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }
};
int main() {
    SavingsAccount savings;// Creating a savings account
    savings.initialize("John Doe", 123456, "saving");
    savings.accept_deposit(1000);// Depositing to savings account
    savings.compute_interest(5);// Computing interest for savings account
    savings.display_balance();// Displaying balance of savings account
    savings.withdraw(500);// Withdrawing from savings account
    savings.display_balance();// Displaying balance of savings account after withdrawal
    CurrentAccount current;// Creating a current account
    current.initialize("Alice Smith", 654321, "current");
    current.accept_deposit(2000);// Depositing to current account
    current.display_balance();// Displaying balance of current account
    current.check_minimum_balance(1000, 50);// Checking minimum balance for current account
    current.display_balance();// Displaying balance of current account after checking minimum balance
    current.withdraw(1500);// Withdrawing from current account
    current.display_balance();// Displaying balance of current account after withdrawal
    return 0;
}

