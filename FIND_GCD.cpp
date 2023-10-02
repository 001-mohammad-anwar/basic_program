#include<iostream>
using namespace std;
int main(){
    int a, b, container1=0, container2=0,k=0, gcd;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    for(int i=1; i<=a &&  i<=b; i++){
        
          if(a%i==0 && b%i==0){
               gcd  = i;
          }
   
    }
    cout<<gcd;
}