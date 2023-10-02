#include<iostream>
using namespace std;
int factorial(int n){
     int fact=1;
    for(int i=1; i<=n;i++){
        fact = fact * i;
        // return fact;
    }
    return fact;

}
 
 int main(){
    int x;
    cout<<"enter the number";
    cin>>x;
    cout<<"factorial of " <<x <<" is: "<<factorial(x);
    return 0;
 }