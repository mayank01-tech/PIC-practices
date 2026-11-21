//  in this program we will use fgets instead of gets //
#include<stdio.h>
int main () {
    char str[100];
     fgets(str,100,stdin);
     puts(str);
    return 0;

}