#include<iostream>
using namespace std;
template<class t>
void bubbledort(t a[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                t temp=a[j];
                a[j]=a[j + 1];
                a[j + 1]=temp;
            }
        }
    }
}
template<class t>
void print(t a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[]={1,8,3,6,5,4};
    int n=sizeof(a)/sizeof(a[0]);
    bubbledort(a,n);
    print(a,n);
    
    float f[]={2.3,54.6,23.6,7.908,12.54};
    int n1=sizeof(f)/sizeof(f[0]);
    bubbledort(f,n1);
    print(f,n1);
    
    char c[]={'b','a','e','d','c'};
    int n2=sizeof(c)/sizeof(c[0]);
    bubbledort(c,n2);
    print(c,n2);
}