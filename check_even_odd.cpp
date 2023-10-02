#include<iostream>
using namespace std;

int main(){
    int a ;
    cout<<"enter a number ";
    cin>>a;
    if(a==0){
        cout<<"number is not be even nor be odd";
    }
    if(a%2==0){
        cout<<"number is even";
    }
    else{
        cout<<"numbver is odd";
    }
return 0;
}