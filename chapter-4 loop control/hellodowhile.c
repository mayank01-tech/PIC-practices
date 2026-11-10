// in this program we are going to print hello using do while loop //
#include<stdio.h>
int main() {
    int i = 1;
    do{
        printf("hello world\n");
        i++;
    }while(i<=5);
    
    int j=5;
    do{
        printf("%d\n",j);
        j--;
    }while(j>=1);
    return 0;
}