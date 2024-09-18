#include<iostream>
#include<string>
using namespace std;
class Car{
    private:
    string company;
    string model;
    int year;
    
    public:
    Car(string c, string m, int y){
        company=c;
        model=m;
        year=y;
    }
    string getCompany(){
        return company;
    }
    string getModel(){
        return model;
    }
    int getYear(){
        return year;
    }
    void setCompany(string c){
        company=c;
    }
    void setModel(string m){
        model=m;
    }
    void setYear(int y){
        year=y;
    }
};
int main(){
    Car myCar("toyota", "camry",2025);
    //accesing and displaying the diffrent property of car
    cout<<myCar.getCompany()<<endl;
    cout<<myCar.getModel()<<endl;
    cout<<myCar.getYear()<<endl;
    
    //modifying the car property
    myCar.setCompany("Honda");
    myCar.setModel("Accord");
    myCar.setYear(2030);
    
    //accesing and displaying the diffrent property of car
    cout<<myCar.getCompany()<<endl;
    cout<<myCar.getModel()<<endl;
    cout<<myCar.getYear()<<endl;
    
}