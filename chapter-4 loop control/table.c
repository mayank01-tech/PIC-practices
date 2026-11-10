// in this program we are going to print table of 2 //
#include<stdio.h>
int main () {
    int n;
    printf("tell me which table should i print : ");
    scanf("%d",&n);
    for(int i = 1;i<=10;i++){
     printf("%d\n",i*n);
    }
    return 0;
}