#include<iostream>
using namespace std;
class animal{
int weight;
public:
int age;
string name;
animal(){// constructor is for inisialiazation
    this->age=0;
    this->weight=0;
    this->name="";
    cout<<"constructor called bydefult when object is created"<<endl;
}
animal(int age){
    this->age=age;
    cout<<"parametrised constructor called"<<endl;
}
~ animal(){
    cout<<"i am inside destructor"<<endl;
}
animal(int age, int weight, int name){
    this->age=age;
    this->weight=weight;
    this->name=name;
    cout<<"parametrised constructor called having 3 argument"<<endl;
}
animal(animal &obj){
    this->age=obj.age;
    this->weight=obj.weight;
    this->name=obj.name;
    cout<<"i am inside the copy constructor"<<endl;
}
void eat(){
    cout<<"eating"<<endl;
}
void sleep(){
    cout<<"sleeping"<<endl;
}
int getweight(){// we can not accesss private outside the class so, we use this fn to acess outside
    return weight;
}
// int setweight(int w){
//     weight=w;
// }
// int setweight(int weight){// both weight are same how we diffrenciate it ?? ->using this 
//     weight=weight;
// }
int setweight(int weight){// both weight are same how we diffrenciate it ?? ->using this 
    this->weight=weight;//this is pointer to the current object 
}
void print(){
    cout<<this->age<<" "<<this->weight<<" "<<this->name<<" "<<endl;
}
};
int main(){

animal remesh; //constructor called bydefult when object  // static memroy allocation, during object creation the constructor called bydefault in (static , dynamc)both
cout<<"size of animal: "<<sizeof(remesh)<<endl;
remesh.age=12;
remesh.name="lion";
cout<<"age of remesh is: "<<remesh.age<<endl;
cout<<"name of remesh is: "<<remesh.name<<endl;
remesh.eat();
remesh.sleep();
remesh.setweight(101);
cout<<"weight:"<<remesh.getweight()<<endl<<endl;


animal * sures=new animal;//constructor called bydefult when object  // dynamic memroy allocation :  (*suresh)-> lies in stack point to new animal., (new animal)->lies in heep memory allocated
// sures.age=13;  sures-> store the address, adress ka age is not logical
(*sures).age=13;// methode 1
(*sures).name="dog";
cout<<(*sures).age<<endl;
cout<<(*sures).name<<endl;
(*sures).eat();
(*sures).sleep();
(*sures).setweight(102);
cout<<(*sures).getweight()<<endl;

sures->age=14; // methode 2
sures->name="bakri";
cout<<sures->age<<endl;
cout<<sures->name<<endl;
sures->eat();
sures->sleep();
sures->setweight(103);
cout<<sures->getweight()<<endl;

//animal *b=new animal;// paramitrised constructor is not show in this case

animal s(10);//parametrised constructor called
animal *b=new animal(100);//parametrised constructor called
animal *c=new animal(100, 200, 300);//parametrised constructor called having 3 argument

//copy object 
animal d=remesh;//i am inside the copy constructor
animal animal1(remesh);//i am inside the copy constructor. // in this case we initialise the animal1 with the value of s
animal animal2(*sures);//i am inside the copy constructor
//bydefault the constructor do shallow copy. for avoiding the shallow copy we use deep copy for deep should write the copy constructor 
d.print();//12 101 lion
animal1.print();//12 101 lion

animal1.name[0]='k';
animal1.print();//12 101 kion
remesh.print();//12 101 lion

animal2.print();//14 103 bakri
//animal2->print(); -> wrong 

//for static the destructor is automatically called, while in dynamic we should implement it in class   ~

delete b;
delete c;
delete sures;
return 0;
}