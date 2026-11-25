// in this method we will write data in file instead of using fprintf we will use fputc function//
#include<stdio.h>
int main () {
    FILE *file;
    file=fopen("test3.txt","a");
    fputc('O',file);
    fputc('r',file);
    fputc('a',file);
    fputc('n',file);
    fputc('g',file);
    fputc('e',file);
    fclose(file);
    return 0;    
}
