// in this program we will take loop starting value from user and also ending ,will print the sum//
#include<stdio.h>
int main () {
    int start,end,sum=0;
    printf("enter from where the loop should start : ");
    scanf("%d",&start);
      printf("enter  where the loop should end : ");
    scanf("%d",&end);
    for(int i=start;i<=end;i++){
       sum = sum +i;
    }
    printf(" the sum is : %d",sum);
    return 0;
}
