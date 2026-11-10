// in this program we will take a input from the user for the termination condition and we will use while loop for this //
#include<stdio.h>
int main() {
      int n;
    printf("enter the ending number for the loop : ");
    scanf("%d",&n);
    int i=0;
    while(i<=n){
        printf("hello world %d \n",i);
        i++;
    }
    return 0;
}
   