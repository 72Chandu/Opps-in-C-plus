#include<iostream>
using namespace std;
int z=2;//gloable
class abc{
    public:
    int x , *y;
    abc(int p, int q): x(p), y(new int(q)){}
    //abc(const abc & obj){x=obj.x; y=obj.y;}//shallow copy constructor , if you not write even then it is called
    abc(const abc & obj){x=obj.x; y=new int (*obj.y);}//for deep copy
    void print() const{
        printf("x: %d ptr y: %p content of Y (*y): %d \n", x,y,*y);
    }

};
int main(){
    /*  // shallow copy
    abc a(1,2);
    a.print();//x: 1 ptr y: 01057EC8 content of Y (*y): 2
    
    abc b(a); //abc b=a;, by default copy constructre of b is called. 
    b.print();//x: 1 ptr y: 01057EC8 content of Y (*y): 2 
    // obsevation: *y is pointing to at the same adress in heap
    
    *b.y=20;
    b.print();//x: 1 ptr y: 01127EC8 content of Y (*y): 20 
    a.print();//x: 1 ptr y: 01127EC8 content of Y (*y): 20 
    */

// deep copy
    abc a(1,2);
    a.print();//x: 1 ptr y: 01057EC8 content of Y (*y): 2
    
    abc b(a); //abc b=a;, by default copy constructre of b is called. 
    b.print();//x: 1 ptr y: 01057ED8 content of Y (*y): 2 
    // obsevation: *y is pointing to at the diffrent  adress in heap
    
    *b.y=20;
    b.print();//x: 1 ptr y: 01127ED8 content of Y (*y): 20 
    a.print();//x: 1 ptr y: 01127EC8 content of Y (*y): 20 

    ::z=4;
    int z=56;
    cout<<z<<endl;//56
    cout<<::z<<endl;//4

    {
        int z=562;
        cout<<z<<endl;//562
    }


    return 0;
}// while using pointer use deep copy
/*
gloable variable: written outside the fn, acessable to all fn 
local variable: written inside the fn, accesable inside that fn , it can access as gloable using scope resolution operator
*/