/*
1-> it initialised to 0 when the 1st object is created no other initialision permitted
2->onley one copy of that member is created for the entire class and is shared by all the object of that class
3->it is visible onley in the class but its lifetime is the entire program

int item::count=10
*/
#include<iostream>
using namespace std;
class item {
    static int count;
    int number;
    public:
    void getdata(int a){
        number=a;
        count++;
    }
    void getcount(){
        cout<<"count: ";
        cout<<count<<endl;
    }
};
int item::count;//defination of static data member 
/*the type and scope of each static member variable must be defined outside the 
class defination because the static data member are seprately rather than as a part of an object*/
int main(){
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    
    a.getdata(100);//geting the data into object a
    b.getdata(200);
    c.getdata(300);
    
    cout<<"after reading the data"<<endl;
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}