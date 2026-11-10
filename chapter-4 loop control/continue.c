// in thiss program we are going to skip ittration using continue //
#include<stdio.h>
int main () {
    for ( int i=1;i<=10;i++){
        if(i==6){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}