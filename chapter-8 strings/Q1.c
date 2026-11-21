// in this program we will get know like in how many type we can intialise a string //
#include<stdio.h>
void printStr(char arr[]);
int main () {
    char first_name[]="MAYANK";
    char last_name[]="Kumar";
   printStr(first_name);
   printStr(last_name);
    return 0;
    
}
void printStr(char arr[]){
     for(int i = 0 ;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}