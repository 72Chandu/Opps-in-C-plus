#include<iostream>
using namespace std;
class code{
    int id;
    public:
    code(){}
    code(int a){id=a;}
    code (code & x){//copy constructor
        id=x.id;//copy in the value
    }
    void display(){
        cout<<id;
    }
};
int main(){
    code A(100);//object A is created and intializesd
    code B(A);//copy constructor called
    code C=A;//copy constructor called again
    code D;//D is created not intializesd
    D=A;//copy constructor not called
    cout<<"A: ";A.display();
    cout<<"B: ";B.display();
    cout<<"C: ";C.display();
    cout<<"D: ";D.display();
    return 0;
}