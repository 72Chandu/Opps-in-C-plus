#include<iostream>
using namespace std;
class Rectangle{
    private:
    double length;
    double breadth;
    public:
    Rectangle(double l, double b){//constructor
        length=l;
        breadth=b;
    }
    double calculateArea(){//member fun to cal area
        return length*breadth;
    }
    double calculatePerimeter(){//member fun to cal perimeter
        return 2*(length+breadth);
    }
};
int main(){
    Rectangle rect(5.0,3.0);;//creating the object of rectangle class
    double area=rect.calculateArea();
    double perimeter=rect.calculatePerimeter();
    cout<<area<<endl;
    cout<<perimeter<<endl;
    return 0;
}