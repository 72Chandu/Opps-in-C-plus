#include<iostream>
using namespace std;
class abc{
    int x, *y , z;// mutable int x; -> for x to change in const 
    public:
     abc(){
        x=0;
        y= new int (0);
     }
    //  abc(int p, int q , int c){ // problem in this type of constructor is if you initialize the const data member in it. it give errore but it is not in initailization list 
    //     x=p;
    //     y= new int (q);
    //       z=c;
    //  }
     abc(int _x, int _y,int _z=0):x(_x), y(new int (_y)), z(_z){ // initialization list, we can initialize const only once tims 
      *y=*y*10;
     } 
     int getx() const{
        //x=50; -> methode is const so, it can not modifes the value, give errore
        //if you want to modifies even it is const then you should declare x mutable in data member
        return x; 
     }
     void setx(int v){x=v;}
     int gety() const {return *y;}
     void sety(int v){*y=v;}
};
void printabc(const abc &a){// getx and gety must be const methode ,all object is const
    cout<<a.getx()<<" "<<a.gety()<<endl;
}
int main(){
    abc obj;
    cout<<obj.getx()<<endl;
    cout<<obj.gety()<<endl;

    abc obj1(1,2);
    printabc(obj1);
    // if i write const before * then content will be const

    int * p=new int;
    *p=2;
    cout<<*p<<endl;
    delete p;
    int n=5;
    p=&n;
    cout<<*p<<endl;

    //--------------const with pointer

    const int * a=new int(2);// conat data, non-const pointer
    //int const * a= new int(2) same as above 
    cout<<*a<<endl;
    //*a=10; compilation errore, cant change the content of pointer
    int b=20;
    a=&b;// pointer itself can be assine
    cout<<*a<<endl;
  
  // -------------const pointer , but non-const data
  int *const d=new int(25);
  cout<<*d<<endl;
  *d=30;//chal jayega
  cout<<*d<<endl;
  int e=50;
  //d=&e;   // nahi chalega pointer is constent


  //--------------------const data, const pointer

  const int * const f=new int (60);
  cout<<*f<<endl;
  //*f=90;    // compilation errore
  int g=80;
  //f=&g;    // compilation errore

}
/*
const keyword
->it is used to decalre that a variable , function, or object is immutable i.e its value cannot be
changed after initialisation
ex: const int x=5; if want to modified it in program than it cause compilation errore
->  you can declare a function as const which means that it doesnot modify the state of the object
it is called on
-> compiler may be able to store const variable in read-only memory which can result in faster
acess time

MACROS keyword
in c++ macro are preprocessor directives that allow you to define constants , function or 
code snippets that can be used throught your code they are typically define using the 
#define directive and are evaluted by the preprocessor before the code is compiled

it can be used for vaiety of purpose , such as defining constants ore creating shorhand for commanly used
expression 
*/
