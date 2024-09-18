#include<iostream>
using namespace std;
/*class animal{ 
    public:
      int weight;
      int age;
      void eat(){
        cout<<"eating"<<endl;
      }
};
// class dog: public animal{  //1

// };

// class dog: protected animal{ //2
//     public:
//       void print(){
//         cout<<this->age;
//       }

// };

class dog: private animal{ //3
    public:
      void print(){
        cout<<this->age;
      }

};
*/
class A{
    public:
    int val;
    void operator+(A obj2){
        int v1=this->val;
        int v2=obj2.val;
        cout<<(v1-v2)<<endl;
    }
};
int main(){
    /*dog d1;
    //d1.eat();//eating   1
    d1.print(); // 2 , 3*/

    A obj1, obj2;
    obj1.val=7;
    obj2.val=2;
    obj1+obj2; // 5


/*
1.encapsulation: raping of data member and member function in single unite (data hiding ), we can achive
it achive by accesifier
why:-> readibility, resusebility, 
perfect encapsulation: make all data member to private

2.inheritance: properties inherite by the child class from parent class
 base class ka                     mode of inheritance 
 access modifier 
                      public            protected            private     
 public               public            protected            private
 protected            protected         protected            private
 private              N/A                N/A                 N/A

 base -> private, protected -> accessable inside class onley , we can acess it outside the class
 by using the some function in public and call this function from outside

 type of inheritance: reusebility
    1 single : [parent <- 1.child] class car{..}; class c1:public car{..};

    2 multiple: class father{..}; class mother{..}; class child:public father, public mother{..};
    class father{public: int chemestry..}; class mother{public: int chemestry..}; class child:public father, public mother{..};
    if the property inside the father and mother are same but when you acess it in child then it
    show the ambiguous errore this is called diamond problem.
    solution:
       1 scope resolution:  
         child obj;
         cout<<obj.father::chemestry// chemistry is printed from father 
         cout<<obj.mother::chemestry// chemistry is printed from mother

    3 multi-level: [parent<--child<--grand child], class A{..}; class B:public A{..}; class C: public B{..};
    C has the all property of A and B

    4 hierarchical:  class parent{}; class child1:public parent{}; class child2:public parent{}; 
    5 hybrid:  

3.polymorphisum: poly->many, morphisum->form, existing in many form
2 type 
     1. complile time
                     a:function overloading: function having same name but diffrent parameter
                     b: operator overloading: overloade the operator , 1 operator can do many thing
                     ex: +-> addition, +-> we can do substraction also
                     syntex: return_type operator +(){} , <<->overload it-> hw
     2. run time/ dynamic binding
           a: function overriding :
              class animal{
                public:
                void spea(){cout<<"speaking";}
              };
              class dog: public animal{
                public:
                void spea(){cout<<"barking";}// overrid, if you not write this fn then animal wala print
              };
              when you call spea in main fn throug dog object then , spea of dog is printing 
              but i want to print the animal wala
              int main(){
                animal * a= new animal();
                a->spea();// speaking
                dog * b= new dog();
                b->spea();// barking

                animal * c= new dog(); // upcasting
                c-> spea(); //speaking ,  for printing barking make virual void spea(){cout<<"speaking";} in animal class
              
                dog * d=(*dog) new animal();// downcasting
                d->spea();//barking , if virual void spea(){cout<<"speaking";} then speaking
              
              }
              by default we can acess data member/ function according to the pointer type
              but if you want to acess according to the object type then you should declare that function 
              virtual in parent class 
              parent * a= new parent();// parent consructor called
              parent * a= new child();//child->object type(heap), pointer type-> parent (stack), both animal & child constructor is called
              child * a= new child();// both parent and child costructor called
              child * a= (*child) new parent();// parent constructor is called
4. abstraction: implementation hiding, encapsulation is subset of abstraction

dynamic memory allocation
stack memory: store local variable, function parameter, bydefulat it is smaller
int a=5 ->stack
heap memory: bydefulat it is larger
int *a = new int -> heap , new int return the adress. which store in pointer a(stack)
int * arr=new int [n]; -> arr(stack) is pointing to the arr of size n in heap
char * a=new char;
float * a= new float;

int **arr= new int * [row];//2d array, array of int*
for(int i=0;i<row;i++){
  arr[i]=new int[col]// integer array of size m, arr[i]->pointer
}// arr[row][col],   delete [] arr[i];

*/
}