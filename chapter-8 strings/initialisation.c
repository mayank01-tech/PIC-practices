// in this program we will get know like in how many type we can intialise a string //
#include<stdio.h>
int main () {
    // \0 isliye lgaya taki compiler ko pta chle ki normal character array ni h bro string array h //
    char name[]={'M','A','Y','A','N','K','\0'};
    //isme isliye ni lgaya kyuki complier isme automatically last m null character lga leta h //
    char _name[]="MAYANK";
    for(int i = 0 ;i<7;i++){
        printf("%c",_name[i]);
    }
    return 0;
}