//in this file input is taken from the user and will be printed to the screen//
#include<stdio.h>
int main(){
    int age;
    printf("Enter the age of person : ");
    scanf("%d",&age); //& this is used to take the entered value from the user and get it store to the age(memory or space) named variable ok//
    printf("Age entered by you is : %d",age);
    return 0;
}