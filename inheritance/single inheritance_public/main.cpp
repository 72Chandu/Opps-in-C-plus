#include<iostream>
using namespace std;
class B{
    int a;//private: not inheritable
    public:
    int b;//public: ready for inheritable
    void get_ab();
    int get_a();
    void show();
};
class D: public B{  //public derivation
    int c; 
    public:
    void mul();
    void display();
};
void B::get_ab(){
    a=5;
    b=10;
}
int B::get_a(){
    return a;
}
void B::show(){
    cout<<"a= "<<a<<endl;
}
void D::mul(){
    c=b*get_a();
}
void D::display(){
    cout<<"a= "<<get_a()<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl<<endl;
}
int main(){
    D d;
    
    d.get_ab();
    d.mul();
    d.show();
    d.display();
    
    d.b=20;
    d.mul();
    d.display();
    return 0;
}
