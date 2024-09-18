/*a educational instituation wishes to maintain a database of it employee the database is divided into number of class whose hierachical relationship are shown in fig 8.14
the figure also show the minimum information required for each class . spacify all the classes and define the function to create the database and retrieve individual information as when required
staf(data member are code, name) has 3 childs teacher(data member subject, publication), typist(data member speed), officer(data member grade), and typist has 2 chold regular and casual(data member daily wages) */
#include<iostream>
using namespace std;
class staff{
protected: 
       int code;
       string name;
public:
     staff(int c, string s):code(c),name(s){}
     int getCode() const{return code;}
     virtual void display()=0;
};

class Teacher: public staff{
    string subject;
    string publication;
public:
     Teacher(int c, string s, string sub, string pub):staff(c,s),subject(sub),publication(pub){}
     void display() override {
         cout<<"Teacher code: "<<code<<", name: "<<name<<", subject: "<<subject<<", publication: "<<publication<<endl;
     }
};
class Typist: public staff{
protected:
       int speed;
public:
     Typist(int c, string s, int spd): staff(c,s),speed(spd){};
     virtual void display()=0;
};
class regular: public Typist{
public:
    regular(int c, string s, int spd):Typist(c,s,spd){}
    void display() override {
        cout<<"regular Typist code: "<<code<<", name: "<<name<<", speed"<<speed<<endl;
    }
};
class Casual: public Typist{
    int dailyWages;
public:
    Casual(int c, string s, int spd, int wages):Typist(c,s,spd),dailyWages(wages){};
    void display() override {
        cout<<"Casual Typist code: "<<code<<",name: "<<name<<", speed"<<speed<<", daily Wages"<<dailyWages<<endl;
    }
};

class Officer: public staff{
    string grade;
public:
     Officer(int c, string s, string g): staff(c,s), grade(g){}
     void display() override {
         cout<<"Officer code: "<<", name: "<<name<<", grade: "<<grade<<endl;
     }
};

void createDatabase(staff* database[], int size){
    database[0]=new Teacher(101, "chandu", "cpp", "cpp_++");
    database[1]=new regular(102, "rohit", 60);
    database[2]=new Casual(103,"virat",55,100);
    database[3]=new Officer(104,"dhoni","senior");
}
void retrieveInfo(staff* database[], int size, int code){
    for(int i=0;i<size;i++){
        if(database[i]->getCode()==code){
            database[i]->display();
            return;
        }
    }
    cout<<"not found"<<endl;
}
void deleteDatabase(staff* database[], int size){
    for(int i=0;i<size;i++){
        delete database[i];
    }
}

int main(){
    const int size=4;
    staff* database[size];
    createDatabase(database,size);
    retrieveInfo(database,size,101);
    deleteDatabase(database,size);
    return 0;
}
/*for dynamic
// Function to create database
vector<Staff*> createDatabase() {
    vector<Staff*> database;
    // Adding sample data
    database.push_back(new Teacher(101, "John Doe", "Math", "Mathematics Today"));
    database.push_back(new RegularTypist(102, "Alice Smith", 60));
    database.push_back(new CasualTypist(103, "Bob Johnson", 55, 100));
    database.push_back(new Officer(104, "Emma Brown", "Senior"));

    return database;
}

// Function to retrieve individual information
void retrieveInfo(const vector<Staff*>& database, int code) {
    for (Staff* staff : database) {
        if (staff->code == code) {
            staff->display();
            return;
        }
    }
    cout << "Employee with code " << code << " not found." << endl;
}

int main() {
    vector<Staff*> database = createDatabase();

    // Example usage to retrieve information
    retrieveInfo(database, 101); // Retrieve information for employee with code 101

    // Freeing memory
    for (Staff* staff : database) {
        delete staff;
    }
    return 0;
}*/





/*override is used to explicitly specify that a member function in a derived class is intended to override a virtual function from a base class

Safety: When you use override, the compiler checks if the function signature in the derived class matches exactly with the function signature 
in the base class. If there is a mismatch, the compiler generates an error, which helps in catching bugs at compile-time rather than at runtime.

Preventing Mistakes: Without override, it's easy to accidentally introduce new functions in derived classes that are not intended to override 
base class functions. This can lead to unintended behavior and bugs. override ensures that you are intentionally overriding a base class function.

 example 

class Base {
public:
    virtual void foo() const {
        cout << "Base foo" << endl;
    }
};

class Derived : public Base {
public:
    void foo() const override {
        cout << "Derived foo" << endl;
    }
};
the Derived::foo() function is explicitly marked with override, indicating that it is intended to override Base::foo(). If Derived::foo() 
doesn't match the signature of Base::foo() (e.g., wrong return type or different parameters), the compiler will generate an error. This 
ensures that you correctly override base class functions and prevents potential bugs.*/
