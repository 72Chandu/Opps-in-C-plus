#include<iostream>
using namespace std;
class class2;
class class1{
    int val;
    public:
    void indata(int a){val=a;}
    void display(){cout<<val<<endl;}
    friend void exchange(class1 &, class2 &);
};
class class2{
    int val2;
    public:
    void indata(int a){val2=a;}
    void display(){cout<<val2<<endl;}
    friend void exchange(class1 &, class2 &);
};
void exchange(class1 &x,class2 &y){
    int temp=x.val;
    x.val=y.val2;
    y.val2=temp;
}
int main(){
    class1 c1;
    class2 c2;
    c1.indata(100);
    c2.indata(200);
    c1.display();
    c2.display();
    
    exchange(c1,c2);
    c1.display();
    c2.display();
}