// in this program we will input a n from th user and will do sum of them //
#include<stdio.h>
int main() {
    int sum,n ;
    sum=0;
    printf("enter the value till which you want the sum :");
    scanf("%d",&n);
    for(int j=n;j>=1;j--){
        sum =  sum + j;
        // loop for printing n in reverse order//
         printf("%d\n",j);
      
    }
    printf("sum is : %d\n",sum);
    return 0;
}