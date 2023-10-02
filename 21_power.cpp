#include <iostream>

using namespace std;

int main(){
    int x,y,power=1;
    cout<<"Enter the value and its power: ";
    cin>>x>>y;
  
    for(int i=1; i<=y;i++){
        power=power*x;
    }
    cout<<"\n power of "<<x<< " is "<<power;
}