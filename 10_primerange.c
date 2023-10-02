#include<stdio.h>
int main(){
    int x,y,j,i,count;
    printf("Enter the value of x: ");
    scanf("%d",&x);  


    printf("Enter the value of y: ");
    scanf("%d",&y);


    for(int i = x; i<=y; i++){

        count=0;

       for( int j=2; j<i; j++){
           if(i%j==0){
                  count++;
                
           } 
       }
    
     if(count==0){
        printf(" %d ", i);
       }
    }

}