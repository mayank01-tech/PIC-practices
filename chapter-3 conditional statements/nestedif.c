// in thi program we will make a nested if else condition //
#include<stdio.h>
int main (){
    int num;
    printf("enter the number to check if it is positive,negative,even,odd : ");
    scanf("%d",&num);
    if(num>=0){
        printf("number is positive\n");
        if(num%2==0){
            printf("number is even");
        }
        else{
            printf("number is odd");
        }
    } else{
        printf("number is negative");
    }
    return 0;
}