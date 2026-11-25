// In this program we are going to use calloc function//
#include<stdio.h>
#include<stdlib.h>
int main () {
    int *ptr; // Declaring an integer pointer//
    ptr=(int*) calloc(5,sizeof(int)); // Allocating memory for 5 integers and initializing them to zero//
    for(int i = 0;i<5;i++){ // Looping through all 5 elements//
        printf("%d\n",ptr[i]); // Printing each array element//
    }
    free(ptr); // Releasing allocated memory//
    int *nptr; // Declaring another integer pointer//
    int n; // Declaring a variable to store the number of blocks//
    printf("enter no of blocks required in memory : "); // Asking the user for the number of blocks//
    scanf("%d",&n); // Taking the number of blocks as input//
    nptr=(int*)calloc(n,sizeof(int)); // Dynamically allocating memory for n integers and initializing them to zero//
    for(int i = 0;i<n;i++){ // Looping through all n elements//
        printf("%d\n",nptr[i]); // Printing each array element//
    }
    free(nptr); // Releasing allocated memory//
    return 0;
}