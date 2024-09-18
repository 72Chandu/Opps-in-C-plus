/*constructor
->tast is to initialize the object of its class, its name is same as the class name
->declared in public class , it can not return any thing
->invoked atomatically when the object are created, can not be inharited through base class
->it cannot be virtual
*/
#include<iostream>
using namespace std;
class integer{
    int m,n;
    public:
    integer(int , int);//constructor declared
    void display(){
        cout<<"m= "<<m<<endl;
        cout<<"n= "<<n<<endl;
    }
};
integer:: integer(int x, int y){//constructor defined
    m=x;
    n=y;
}
int main(){
    integer int1(0,100);//constructor called implicitly
    integer int2=integer(25,75);//constructor called explicitly
    int1.display();
    int2.display();
    return 0;
}
/*
class A{
    public:
    A(A);-> not valid 
};
class A{
    public:
    A(A&);-<valid
}
*/