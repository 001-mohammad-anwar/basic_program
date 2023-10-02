#include<iostream>
using namespace std;
int main(){
    int x,r,sum=0;
    cout<<"Enter a number";
    cin>>x;
    while (x>0){
      r =x%10;
     sum = sum + r;
     x = x/10;

    }
    cout<<sum;
    
    
}