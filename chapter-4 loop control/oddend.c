// in this program we will keep taking input from the user till he/she enter a odd number//
#include<stdio.h>
int main () {
    int num;
  
   do{
    scanf("%d",&num);
    if(num%2!=0){
        break;
    }
   }while(1);
   printf("thank you!!");
    return 0;
}