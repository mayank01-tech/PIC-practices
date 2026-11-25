// in this program we are going to use malloc function //
#include<stdio.h>
#include<stdlib.h>
int main () {
    int *ptr; // Declaring an integer pointer//
    ptr=(int*) malloc(5*sizeof(int)); // Dynamically allocating memory for 5 integers//
    ptr[0]=0; // Assigning value 0 to the first element//
    ptr[1]=1; // Assigning value 1 to the second element//
    ptr[2]=2; // Assigning value 2 to the third element//
    ptr[3]=3; // Assigning value 3 to the fourth element//
    ptr[4]=4; // Assigning value 4 to the fifth element//
    for(int i = 0;i<=4;i++){ // Looping through all 5 elements//
        printf("%d\n",ptr[i]); // Printing each array element//
    }
    free(ptr); // Releasing dynamically allocated memory//
    return 0;
}