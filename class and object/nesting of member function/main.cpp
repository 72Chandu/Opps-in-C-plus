#include<iostream>
using namespace std;
class set{
    int m,n;
    
    public:
    void input();
    void display();
    int largest();
};
int set::largest(){
    if(m>=n) return (m);
    else return (n);
}
void set::input(){
    cout<<"input value of m,n"<<endl;
    cin>>m>>n;
}
void set::display(){
    cout<<"largest value= "<<largest()<<endl;//calling member function
}
int main(){
    set a;
    a.input();
    a.display();
    return 0;
}//object cannot acess private member