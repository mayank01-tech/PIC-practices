// in this program we are going to use modular operator //
#include<stdio.h>
int main () {
    int num1,num2;
    printf("enter the number 1 and number 2 to find modulas : ");
    scanf("%d %d",&num1,&num2);
    int result = num1%num2;
    printf("result is : %d",result);
    return 0;
}

//note  : it doesn't work on float values//
// if operands are negative output will  be negative otherwise output will be positive//