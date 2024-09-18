#include<iostream>
using namespace std;

class M{
protected:
    int m;
public:
    void get_m(int x){
        m=x;
    }
};

class N{
protected:
    int n;
public:
    void get_n(int x){
        n=x;
    }
};

class P: public M, public N{
public:
    void display(){
        cout<<"m= "<<m<<endl;
        cout<<"n= "<<n<<endl;
        cout<<"m*n= "<<m*n<<endl; // Added missing multiplication operator
    }
};

int main(){
   P p;
   p.get_m(10);
   p.get_n(20);
   p.display();
   return 0;
}
/*
C++ Implementation to show that a derived classdoesn’t inherit access to private data members.However, it does inherit a full parent object.
class A {
public:
	int x;

protected:
	int y;

private:
	int z;
};

class B : public A {
	// x is public
	// y is protected
	// z is not accessible from B
};

class C : protected A {
	// x is protected
	// y is protected
	// z is not accessible from C
};

class D : private A // 'private' is default for classes
{
	// x is private
	// y is private
	// z is not accessible from D
};

*/