/*
static keyword

static data member: that variable is going to store memory with all of the class member

static member function: there is no instance of that class being passed into that method
*/
#include<iostream>
using namespace std;
class abc{
    public:
    static int x, y;
    static void print(){
        cout<<x<<" "<<y<<endl;
    }
};
int abc::x;
int abc::y;
int main(){
    abc obj1;
    obj1.x=1;//  abc::x=1;
    obj1.y=23;// abc::y=23;
    obj1.print();//1 23    abc::print();
    
    abc obj2;
    obj2.x=40; //abc::x=40;
    obj2.y=50; //abc::y=50;
    obj1.print();//40 50     abc::print();
    obj2.print();//40 50     abc::print();
    // x and y are same for all object 
    return 0;
}
/*
#include<iostream>
using namespace std;
class abc{
    public:
    int x, y;
    void print() const{
        cout<<this->x<<" "<<this->y<<endl;
    }
};
int main(){
    abc obj1={1,2};
    abc obj2={4,6};
    obj1.print();
    obj2.print();
    // x and y of obj1 and obj2 is diffrent diffrent then how it identify it ->by using pointer of object which hiddenly passed to print fn
    return 0;
}
*/