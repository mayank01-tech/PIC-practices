// fibonnaci sequence storing in c //
#include<stdio.h>
int main (){
    int n;
    printf("enter how many number should be stored : ");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];/*idhar fib[i-1]mtlb fib array m i-1 ka mtlb h ki i  jese 2 toh 2-1 kya hua 1 usme plus krdo fib 
        fib array m [i-2] i-1 mtlb ek pehle se minus kro aur i-2 mtlb 2 pehle se minus kro smjhe bby */
        printf("%d \t",fib[i]);
    }
    return 0;
}
/*fibonnaci sequence m na bro next number apne pichle number ka sum hota h
mtlb jese number chalu hote h 0 se toh zeroth index p value 0
fir first index p 1 fir 2nd index p zeroth and first ka sum toh hua 1
fir third p second aur first ka sum toh voh hua 2 ese hi aage so bby  */