// in this program we will take a input from the user and will print table of it in reverse order//
#include<stdio.h>
int main () {
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i = 10 ; i>=1;i--){
        printf("%d\n",i*n);
    }
    return 0;
}
