// in this program we are going to print all those numbers which are odd between 5 to 55 //
#include<stdio.h>
int main () {
    for(int i =5;i<=55;i++){
        if(i%2==0){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}