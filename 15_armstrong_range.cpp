#include <iostream>

int main() {
    // Write C++ code here
  using namespace std;
  int x , y;
  int r, armstrong, sum,n;
  cout<<"Enter the value of x and y";
  cin>>x>>y;
  for(int i=x; i<=y; i++){
      n=i;
      armstrong=n;
      sum = 0;
      
      while(n>0){
          r = n%10;
          sum = sum + (r*r*r);
          n = n/10;
      }
      if(armstrong == sum){
          cout<< armstrong <<" ";
      }
  }

    return 0;
}