/*write a program to implement a base class CONSUMER and a derive class TRANSACTION . both have overridden member function getdata() and 
display(). the function in base class have been declared virtual and again make the base class member function pure virtual*/
#include<iostream>
#include<string>
using namespace std;
class CONSUMER{
    protected:
    string name;
    double balance;
    public:
    virtual void getdata()=0;//pure virtual function
    virtual void display(){
        cout<<"name: "<<name<<endl;
        cout<<"balance: "<<balance<<endl;
    }
};
class TRANSACTION: public CONSUMER{
    private:
    double amount;
    public:
    void getdata(){
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter balance: ";
        cin>>balance;
        cout<<"enter transaction amount: ";
        cin>>amount;
    }
    void display(){
        CONSUMER::display();
        cout<<"transaction amount : "<<amount<<endl;
    }
};
int main(){
    CONSUMER *ptr;
    TRANSACTION trans;
    ptr=&trans;
    ptr->getdata();
    cout<<" \ndetails:"<<endl;
    ptr->display();
    return 0;
}