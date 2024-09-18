/*assume that object represent an employee report that contain the information about employee id, total bonus, total overtime in a particular year
use four object to represent four employee report .write a program that display report information use setpara() overloaded member function  to set 
report attributes by passing/without passing the argument and memeber function displayreport() to show the report according to parameter*/
#include<iostream>
#include<string>
using namespace std;
class EmployeeReport{
private:
    int emp_id;
    double total_bonus;
    double total_overtime;
public:
    EmployeeReport(int id, double bonus, double overtime){
        emp_id=id;
        total_bonus=bonus;
        total_overtime=overtime;
    }
    void setpara(int id, double bonus, double overtime){
        emp_id=id;
        total_bonus=bonus;
        total_overtime=overtime;
    }
    void setpara(){}
    void displayreport(){
        cout<<"employee is: "<<emp_id<<endl;
        cout<<"total bonus: "<<total_bonus<<endl;
        cout<<"total overtime: "<<total_overtime<<endl;
    }
};

int main(){
// Create four EmployeeReport objects
    EmployeeReport report1(1, 1000, 20);
    EmployeeReport report2(2, 1500, 25);
    EmployeeReport report3(3, 1200, 22);
    EmployeeReport report4(4, 1300, 23);
    cout<<"intial report:"<<endl;
    report1.displayreport();
    report2.displayreport();
    report3.displayreport();
    report4.displayreport();
// Modify report attributes using setpara() method
    report1.setpara(1, 1200, 20);
    report3.setpara(3, 1300, 25); 
    cout<<"modified report:"<<endl;
    report1.displayreport();
    report2.displayreport();
    report3.displayreport();
    report4.displayreport();
}