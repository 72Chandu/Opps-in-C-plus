/*->a copy of the entire object is passed to the function
pass-by-value -> any change made to the object inside the function do not affect the object used to 
to call the function

->onley the address of the object is transferred to the function
pass-by-refrence-> any change made to the object inside the function
will reflect in the actual object*/
#include<iostream>
using namespace std;

class time1{
    int hours;
    int minutes;

public:
    void gettime(int h,int m){
        hours=h;
        minutes=m;
    }
    void puttime(){
        cout<<hours<<" hours and ";
        cout<<minutes<<" minutes"<<endl;
    }
    void sum(time1 t1, time1 t2); // Declaration with object as argument
};

void time1::sum(time1 t1, time1 t2){
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;
}

int main(){
    time1 t1, t2, t3;
    t1.gettime(2, 45);
    t2.gettime(3, 30);
    t3.sum(t1, t2);
    
    cout<<"t1: "; t1.puttime();
    cout<<"t2: "; t2.puttime();
    cout<<"t3: "; t3.puttime();
    
    return 0;
}
