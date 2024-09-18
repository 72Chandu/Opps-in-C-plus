#include<iostream>
using namespace std;
class employee{
    char name[30];//string as class member
    float age;
    public:
    void getdata();
    void putdata();
};
void employee::getdata(){
    cout<<"enter name:";
    cin>>name;
    cout<<"enter age: ";
    cin>>age;
}
void employee::putdata(){
    cout<<"name:"<<name<<endl;
    cout<<"age: "<<age<<endl;
}
const int size=3;
int main(){
    employee manager[size];
    for(int i=0;i<size;i++){
        cout<<"details of manager"<<i+1<<endl;
        manager[i].getdata();
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<"manager"<<i+1<<endl;
        manager[i].putdata();
    }
    return 0;
}