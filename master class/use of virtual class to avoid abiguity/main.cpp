/*consider a class network og fig.8.5 . the class master derives information from bothe account and admin class 
which is turn derive information from the class person .define all the four class and write a programe to create , update and 
display the information contained in master class .
person class has a 2 data member name and code .it has 2 have child account and admin where account have one data member pay and admin have 1 data member experience*/
#include<iostream>
#include<string>
using namespace std;
class person{
protected:
        string name;
        int code;
public: 
      void setdata(string s, int c){
          name=s;
          code=c;
      }
      void displayPer(){
          cout<<"name: "<<name<<endl;
          cout<<"code: "<<code<<endl;
      }
};
class account: public virtual person{
protected:
        float pay;
public:
     void setpay(float p){
         pay=p;
     }
     void displayPay(){
         cout<<"pay: $"<<pay<<endl;
     }
};
class admin: virtual public  person{
protected:
       int experience;
public: 
     void setExperience(int ex){
         experience=ex;
     }
     void displayExperience(){
         cout<<"experience: "<<experience<<"year"<<endl;
     }
};
class master: public account, public admin{
public:
     void displayMasterData(){
         cout<<"Master data: "<<endl;
         displayPer();//spacify the base class explicitley for overcome the ambiguity(it is inharited both from admin and account class)
         displayPay();
         displayExperience();
     }
};
int main(){
    master m;
    m.setdata("chandu yadev", 1234);// Specify the base class explicitly to overcome the ambiguity
    m.setpay(5000.0);
    m.setExperience(3);
    m.displayMasterData();
    return 0;
}
