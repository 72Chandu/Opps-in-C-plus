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
class D: private B{  //private derivation
    int c; 
    public:
    void mul();
    void display();
};
void B::get_ab(){
    cout<<"enter value for a and b";
    cin>>a>>b;
}
int B::get_a(){
    return a;
}
void B::show(){
    cout<<"a= "<<a<<endl;
}
void D::mul(){
    get_ab();
    c=b*get_a();
}
void D::display(){
    show();
    cout<<"b= "<<b<<"\n"<<"c= "<<c<<"\n\n";
}
int main(){
    D d;
    //d.get_ab();// wont work
    d.mul();
    //d.show();//wont work
    d.display();
    //d.b=20;//wont work : b has become private
    d.mul();
    d.display();
    return 0;
}