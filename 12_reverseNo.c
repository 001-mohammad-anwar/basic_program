#include<stdio.h>
 int main() {
     int x,r,reverse=0;
      printf("Enter a number:");
      scanf("%d",&x);

      while(x>0){

        r = x%10;
        reverse = reverse*10+r;
        x=x/10;

      }

      printf("reverse of a number is %d  ",reverse);
 }
 