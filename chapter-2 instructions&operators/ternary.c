// in this program we will use ternary operator //
#include<stdio.h>
int main () {
    int age;
    printf("enter the age of person to check he/she adult or not : ");
    scanf("%d",&age);
    age>=18?printf("person is adult"):printf("person is not adult");
    return 0;
}