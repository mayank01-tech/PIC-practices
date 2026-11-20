// in this proram we are going to find the fibonnaci sequence //
#include<stdio.h>
int fib(int n);

int main (){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int result = fib(n);
    printf("fib is : %d\n",result);

return 0;

}
int fib(int n){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    
    int fibN1=fib(n-1);
    int fibN2=fib(n-2);
    int fibn = fibN1+fibN2;
    return fibn;
}
/*fibonnaci sequence m na bro next number apne pichle number ka sum hota h
mtlb jese number chalu hote h 0 se toh zeroth index p value 0
fir first index p 1 fir 2nd index p zeroth and first ka sum toh hua 1
fir third p second aur first ka sum toh voh hua 2 ese hi aage so bby  */