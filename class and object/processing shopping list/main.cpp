/*->no seprate spce is allocated for member function when diffrent object are created  
->onley space for member variable is allocated seprately for each object
->because the member variable will hold diffrent data value for diffrent object
*/

#include<iostream>
using namespace std;

const int m=50;

class item{
    int itemCode[m];
    float itemPrice[m];
    int count;

public:
    void cnt(){count=0;}
    void getitem();
    void displaySum();
    void removeItem();
    void displayItem();
};

void item::getitem(){
    cout<<"Enter item code: ";
    cin>>itemCode[count];
    cout<<"Enter item price: ";
    cin>>itemPrice[count];
    count++;
}

void item::displaySum(){
    float sum=0;
    for(int i=0;i<count;i++){
        sum=sum+itemPrice[i];
    }
    cout<<"Total value: "<<sum<<endl;
}

void item::removeItem(){
    int a;
    cout<<"Enter item code to remove: ";
    cin>>a;
    for(int i=0;i<count;i++){
        if(itemCode[i]==a){
            itemPrice[i]=0;
            return; // Exit the function after removing the item to avoid unnecessary iterations
        }
    }
    cout<<"Item not found."<<endl;
}

void item::displayItem(){
    cout<<"Items:"<<endl;
    for(int i=0;i<count;i++){
        cout<<"Item code: "<<itemCode[i]<<endl;
        cout<<"Item price: "<<itemPrice[i]<<endl;
    }
    cout<<endl;
}

int main(){
    item order;
    order.cnt();
    int x;
    do{
        cout<<"1: Add an item\n2: Display total value\n3: Delete an item\n4: Display all items\n5: Exit\n";
        cin>>x;
        switch(x){
            case 1: order.getitem(); break;
            case 2: order.displaySum(); break;
            case 3: order.removeItem(); break;
            case 4: order.displayItem(); break;
            case 5: break;
            default: cout<<"Error in input. Try again."<<endl;
        }
    }while(x!=5);
    return 0;
}
