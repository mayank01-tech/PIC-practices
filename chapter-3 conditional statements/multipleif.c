// in this program we will use multiple if else //
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
    else if(age>=13 && age<18){
        printf("person is teenager..");
    }
    else{
        printf("child");
    }
    return 0;
}