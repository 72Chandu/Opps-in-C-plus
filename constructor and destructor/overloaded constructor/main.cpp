#include<iostream>
using namespace std;
class complex{
    float x,y;
    public:
    complex(){}//constructor no-arg
    complex(float a){x=y=a;}//constructor-one-arg
    complex(float real, float img){x=real; y=img;}//constructor-two-arg
    friend complex sum(complex, complex);
    friend void show(complex);
};
complex sum(complex c1, complex c2){
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return c3;
}
void show(complex c){
    cout<<c.x<<"+i"<<c.y<<endl;
}
int main(){
    complex A(2.7,3.5);
    complex B(1.6);
    complex C;
    C=sum(A,B);
    cout<<"A= ";show(A);
    cout<<"B= ";show(B);
    cout<<"C= ";show(C);
    return 0;
}
//c++ compiler has an implicit constructor which creates object even though it was not defined in the class