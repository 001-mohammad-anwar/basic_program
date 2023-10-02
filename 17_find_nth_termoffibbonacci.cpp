#include<iostream>

using namespace std;

 int fib (int );

int main() {
    int n;
     cout<<"how many number of fibonacci seriese do you want to print ?";
     cin>>n;
     cout<<fib(n);
     return 0;

}

 int fib(int x)
 {
    int a=0 , b=1 , c ;
    if(x == 0)
         return a;
     for(int i=1; i<=x; i++){
    
        c = a + b;
        a = b;
        b = c;
     }
     return a;

 }
   


