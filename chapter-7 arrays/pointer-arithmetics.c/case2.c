/* 
in this program we are going to declare a variable name  
and will point a pointer on it and increase the pointer and will 
print the new address pointed by pointer*/
#include<stdio.h>
int main () {
    char name = 'a';
    char *ptr=&name;
    printf("current address of age variable is : % u\n",ptr);
    ptr++;
    printf("new  address where pointer is pointing is : % u\n",ptr);
    ptr--;
    printf("new  address where pointer is pointing is : % u\n",ptr);

    return 0;
}