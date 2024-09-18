/* 
1. delivering only essential information to the outer world while masking the background details
2. it is design and programing methode that seprates the interface from the implementaion 
3. real life eg. various functionalities of airpods but dont know the actual implementation working 
      a. to avoid a car , one only needs to know the driving process and not the mechanics of the car engine
abstruction using class
1. grouping data member and member function into classes using specifiers.
2.a class can choose which data member are visible to the outside world and which are hidden
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={3,4,1,2};
    sort(v.begin(), v.end());
    for(auto i :v){
        cout<<i<<endl;
    }
    return 0;7
}
      