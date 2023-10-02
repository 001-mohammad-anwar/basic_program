#include<stdio.h>

int main() {
    int sum=0,x,r;

    printf("enter a number: ");
    scanf("%d",&x);

    while(x>0){

        r = x%10;
        sum = sum + r;
        x = x/10;

    }
    printf("sum of digit is %d: ", sum);


}