// in this  program we are going to like will check for the age of a person whether he/she is adult or not //
#include<stdio.h>
int main () {
    int age;
    printf("enter the age of person to check he/she adult or not : ");
    scanf("%d",&age);
    if(age>=18){
        printf("person is adult..\n");
        printf("person can vote..\n");
        printf("person can drive..\n");
    }
    else{
        printf("person is not adult..");
    }
    return 0;
}