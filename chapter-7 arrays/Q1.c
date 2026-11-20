// writing a program to enter price of 3 items and print their final cost with gst //
#include<stdio.h>
int main () {
    float pricing[3];
    for(int i=0;i<3;i++){
        printf("enter prices of products : ");
        scanf("%f",&pricing[i]);
    }
    printf(" prices with gst are :\n ");
        for(int i=0;i<3;i++){
            printf("%f\n",pricing[i]+(0.18*pricing[i]));
    }
}