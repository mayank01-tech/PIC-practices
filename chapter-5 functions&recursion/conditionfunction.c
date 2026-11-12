// in thi program we will print namaste if user is indian and will print bonjour if user is french//
#include<stdio.h>
void printNamaste();
void printBonjour();
int main (){
    char nationality;
    printf("enter i if you are indian and if you are french enter f : ");
    scanf("%c",&nationality);
    if(nationality=='i'){
        printNamaste();
    }else if(nationality=='f'){
        printBonjour();
    }
    else{
printf("not recognized nationality.");
    }

    return 0;
}

void printNamaste(){
    printf("Namaste");
}
void printBonjour(){
    printf("Bonjour");
}