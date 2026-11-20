// in this program we are going to take input in the array and will print all stored values in array //
#include<stdio.h>
int main (){
    int marks[3];
    printf("enter marks for chemistry : ");
    scanf("%d" , &marks[0]);
    printf("enter marks for physics : ");
    scanf("%d" , &marks[1]);
    printf("enter marks for maths : ");
    scanf("%d" , &marks[2]);
    printf("Marks are :\nchemistry=%d\nphysics=%d\nmaths=%d\n",marks[0],marks[1],marks[2]);
    return 0;
    }
