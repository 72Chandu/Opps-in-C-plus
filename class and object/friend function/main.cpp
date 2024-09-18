/*->it is not the scope of the class to which it has been declared as a friend so, it cannot be called using the object of that class
->it can be invoked like a normal function without the help of any object
->it can be declared either in the public or private part
->it has a object as argument
->acesss: object_name.member_name */

#include<iostream>
using namespace std;
class sample{
    int a,b;
    public:
    void setvalue(){
        a=25;
        b=40;
    }
    friend float mean(sample s);
};
float mean(sample s){
    return float(s.a+s.b)/20;
}
int main(){
    sample x;
    x.setvalue();
    cout<<mean(x);//pass the object x by value to the friend
    return 0;
}
