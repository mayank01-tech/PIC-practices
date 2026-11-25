// in this program we will use condition if file doesnt exist so what to return //
#include<stdio.h>
int main () {
    FILE *file;
    file=fopen("hello.txt","r");
    if(file==NULL){
        return printf("doesnt exist");
    }else{
        fclose(file);
    }
    return 0;
    
}