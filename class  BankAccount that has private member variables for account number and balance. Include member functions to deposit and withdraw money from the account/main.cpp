#include<iostream>
using namespace std;
class BankAccount{
    private:
    int accountNo;
    double balance;
    public:
    BankAccount(int acc, double bal){
        accountNo=acc;
        balance=bal;
    }
    void deposite(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"deposite of \u20B9"<<amount<<"successful"<<endl;
        }
        else{
            cout<<"invalid deposite";
        }
    }
    void withdraw(double amount){
        if(amount>0&&amount<=balance){
            balance-=amount;
            cout<<"withdraw of \u20B9"<<amount<<"successful"<<endl;
        }
        else{
            cout<<"invalid withdraw";
        }
    }
    double getBalance(){
        return balance;
    }
};
int main(){
    BankAccount account(12345,1000.0);
    account.deposite(500.0);//deposite some money
    account.withdraw(200.0);//withdraw some money
    cout<<account.getBalance();
    return 0;
    
}