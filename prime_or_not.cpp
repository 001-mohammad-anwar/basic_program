#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number ";
    cin>>x;
    if(x==0){
        cout<<"number is not be prime nor be composite";
    }
    int flag = 0;
    for(int i = 2; i<=x/2; i++){
        if(x%i==0){
            flag++;
            break;
        }
    }
    if(flag == 0){
        cout<<"number is prime";
    }
    else{
        cout<<"number is not prime";
    }
    return 0;
}