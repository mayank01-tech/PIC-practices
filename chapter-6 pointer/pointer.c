#include<stdio.h>
int main () {
    int age=18 ;
    int *ptr=&age;
    int _age= *ptr;
    printf("value at address of age is : %d",_age);
}