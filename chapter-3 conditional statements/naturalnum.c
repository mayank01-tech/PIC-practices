// in this program we will find that the given number i natural number or not //
#include<stdio.h>
int main () {
    int num;
    printf("enter the number to check if it is natural or not : ");
    scanf("%d",&num);
     if(num>=1){
        printf("number is natural\n");}
        else{
            printf("number is not natural..");
        }
        return 0;
}