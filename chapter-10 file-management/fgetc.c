//in this program we will print data using fgets function//
#include<stdio.h>
int main (){
    FILE *file;
    file=fopen("test.txt","r");
    printf("characters is = %c\n",fgetc(file));
    printf("characters is = %c\n",fgetc(file));
    printf("characters is = %c\n",fgetc(file));
    printf("characters is = %c\n",fgetc(file));
    printf("characters is = %c\n",fgetc(file));
    fclose(file);
    return 0;
}