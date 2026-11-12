// in this program we will define a function to print the sum of two numbers//
#include<stdio.h>
int sum(int a,int b);
int main (){
    int  a,b;
    printf("enter two numbers to get the sum :  ");
    scanf("%d %d",&a,&b);
    int s = sum(a,b);
    printf(" sum is : %d",s);
    return 0;
}
int sum (int a, int b){
    int sum=a+b;
    return sum;
}
