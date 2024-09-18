/*write program in c++ to implement class ADD will have 3 overloaded function 1st one will add two integer number 2nd one will add two floating number
and one integer number and 3rd one will take two complex object as parameter and will add two complex number*/

#include<iostream>
using namespace std;
class ADD{
    public:
    int add(int  a, int b){
        return a+b;
    }
    float add(float a, float b, int c){
        return a+b+c;
    }
    struct complex{
        float real;
        float Imaginary;
        
        complex(float r=0.0, float i=0.0): real(r),Imaginary(i){}
        complex add(complex & other){
            complex result;
            result.real=real+other.real;
            result.Imaginary=Imaginary+other.Imaginary;
            return result;
        }
    };
    complex add(complex& c1,complex & c2){
        return c1.add(c2);
    }
};
int main(){
    ADD obj;
    int sum1=obj.add(5,10);
    cout<<"sum of integer:"<<sum1<<endl;
    float sum2=obj.add(3.5,2.6,3);
    cout<<"sum of float:"<<sum2<<endl;
    
    ADD::complex c1(2.0,3.0);
    ADD::complex c2(4.3,6.5);
    ADD::complex sum3= obj.add(c1,c2);
    cout << "Sum of complex numbers: " << sum3.real << " + i" << sum3.Imaginary << endl;
    return 0;
    
}
