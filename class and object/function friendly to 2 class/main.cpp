#include<iostream>
using namespace std;
class abc;//forward declaration
class xyz{
    int x;
    public:
    void setvalue(int i){x=i;}
    friend void max(xyz,abc);
};
class abc{
    int a;
    public:
    void setvalue(int i){a=i;}
    friend void max(xyz,abc);
};
void max(xyz m,abc n){//defenation of friend function
    if(m.x>n.a) cout<<m.x;
    else cout<<n.a;
}
int main(){
    abc obj;
    obj.setvalue(10);
    xyz obj2;
    obj2.setvalue(20);
    max(obj2, obj);
    return 0;
}