#include<iostream>
using namespace std;
class complex{
    float x, y;
    public:
    complex(){}
    complex(float r, float i){
        x=r;
        y=i;
    }
    void display(){
        cout<<x<<"+j"<<y<<endl;
    }
     complex operator +(complex);
};
complex complex::operator +(complex c){
    complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return temp;//return complex((x+c.x),(y+c.y));
}
int main(){
    complex c1,c2,c3;
    c1=complex(2.5,3.5);
    c2=complex(1.6,2.7);
    c3=c1+c2; //c3=c1.operator+(c2); both are same
    
    cout<<"c1=";c1.display();
    cout<<"c2=";c2.display();
    cout<<"c3=";c3.display();
    return 0;
}
