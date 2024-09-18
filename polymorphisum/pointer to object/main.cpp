/*polymorphisum ->(compile time polymorphisum, run time polymorphisum) 
compile time polymorphisum->(function overloading, operator overloading)
run time polymorphisum-> (virtual function)
lete binding/dynamic binding-> when the function is linked with particular class much later after compilation, because the slection of appropriate
funtion is done dynamically at run time
object pointer are useful in creating at run time . we can also use an object pointer to acess the public member of an object */

#include<iostream>
using namespace std;
class item{
    int code;
    float price;
    public:
    void getdata(int a, float b){
        code=a;
        price=b;
    }
    void show(){
        cout<<code<<endl;
        cout<<price<<endl;
    }
};
int main(){
    /*
    item x;// or item *ptr=&x;
    x.getdata(100,75.50)// or ptr->getdata(100,75.50)
    x.show()// or  ptr->show(); or (*ptr).show();
    */
    item *ptr=new item[2];//array of 2 object
    item *d=ptr;
    int x;
    float y;
    for(int i=0;i<2;i++){
        cout<<"input code & price"<<i+1;
        cin>>x>>y;
        ptr->getdata(x,y);
        ptr++;
    }
    for(int i=0;i<2;i++){
        cout<<"item"<<i+1<<endl;
        d->show();
        d++;
    }
    return 0;
}