// in this program function will print table for the entered number //
#include<stdio.h>
void printTable(int n);
int main (){
    int n;
    printf("enter number to print its table :  ");
    scanf("%d",&n);
   printTable(n);//argument//actual parameter//
    
    return 0;
}
void printTable(int n){ //formal parameter//
    for(int i = 1;i<=10;i++){
    printf("%d\n",n*i);
    }
    
}