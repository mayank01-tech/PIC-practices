// in this program we will create A RECURSION function in which we print the sum of first n natural numbers//
#include<stdio.h>
int sum(int n);
int main (){
    int  n;
    printf("enter  number to get the sum :  ");
    scanf("%d",&n);
    printf(" sum is : %d",sum(n));
    return 0;
}
int sum (int n){
    if(n==1){
        return 1;
    }
  int sumn1=sum(n-1);
  int sumf=sumn1+n;
  return sumf;
}