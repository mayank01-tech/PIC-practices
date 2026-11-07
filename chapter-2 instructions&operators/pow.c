// in this program we are going to use pow function for power //
#include<stdio.h>
#include<math.h>// we included this header file because power function is written or to be said printed in this function//
int main (){
    int x,y;
    printf("enter the value and how much power of it you want to find : ");
    scanf("%d %d",&x,&y);
    int power=pow(x,y);
    printf("the value is : %d",power);
    return 0;
}