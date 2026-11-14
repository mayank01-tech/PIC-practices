// in this program we are going to make a store pointer address into another pointer variable//
#include<stdio.h>
int main (){
    float price = 100.00;
    float *ptr=&price;
    float **pptr=&ptr;
    printf("value of ppr is : %f",**pptr);
    return 0;
}