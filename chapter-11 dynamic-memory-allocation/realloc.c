//in this program we will increase the size of allocated memory dynamically//
#include<stdio.h>
#include<stdlib.h>
int main () {
    int *ptr; // Declaring an integer pointer//
    ptr=(int*)calloc(5,sizeof(int)); // Allocating memory for 5 integers and initializing them to zero//
    printf("enter the numbr(5) :"); // Asking the user to enter 5 numbers//
    for(int i =0;i<5;i++){ // Looping through 5 elements//
        scanf("%d",&ptr[i]); // Taking input for each element//
    }
           printf("number is :\n");
    for(int i =0;i<5;i++){ // Looping through 5 elements//
        printf("%d\t",ptr[i]); // Taking input for each element//
    }
    ptr=realloc(ptr,8*sizeof(int)); // Resizing allocated memory from 5 integers to 8 integers//
    printf("\nenter the numbr(8) :"); // Asking the user to enter 8 numbers//
    for(int i=0;i<8;i++){ // Looping through 8 elements//
        scanf("%d",&ptr[i]); // Taking input for each element//
    }
    printf("number is :\n");
    for(int i =0;i<8;i++){ // Looping through 5 elements//
        printf(" %d\t",ptr[i]); // Taking input for each element//
    }
    free(ptr); // Releasing dynamically allocated memory//
    return 0;
}