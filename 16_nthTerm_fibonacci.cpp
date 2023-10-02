#include<iostream>

using namespace std;

int main() {
     
     int a=0,b=1,c,n;

     cout<<"how many number of fibonacci seriese do you want to print ?";
     cin>>n;

     for(int i=1; i<=n; i++){
        cout<< a <<" ";
        c=a+b;
        a=b;
        b=c;
     }
     return 0;


} 