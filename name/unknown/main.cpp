/*Write a program to print the name of students by creating a student class. If no name is passed while creating an 
object of student class, then a name should be "unknown", otherwise the name should be equal to  the string value 
passed while creating objects of student class*/
#include<iostream>
#include<string>
using namespace std;
class student{
private:
       string name;
public:
     student(string studentName="unknown"){
         name=studentName;
     }
     void display(){
         cout<<name<<endl;
     }
};
int main(){
    student s1;
    student s2("chandu");
    s1.display();
    s2.display();
    return 0;
}