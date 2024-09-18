/*a static function can have acess to onley other member (function , variable) declared in the same class
it can be called using the class name (instd of its object) class-name::function-name;*/
#include<iostream>
using namespace std;
class test{
    int code;
    static int count;//static variable
  public:
   void setcode(){
       code=++count;
   }
   void showcode(){
       cout<<"object number:"<<code<<endl;
   }
   static void showcount(){//static member function
       cout<<"count: "<<count<<endl;
   }
};
int test::count;
int main(){
    test t1,t2;
    t1.setcode();
    t2.setcode();
    
    test::showcount();//accessing static function
    test t3;
    t3.setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}