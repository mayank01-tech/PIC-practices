// in this program we will recognize that the entered character by user is uppercase or lowercase //
#include<stdio.h>
int main () {
    char character;
    printf("enter the character choice is yours whether it is in lowercase / uppercase : ");
    scanf("%c",&character);
    if(character>='A'&&character<='Z'){
        printf("character is uppercase.");
    }
    else if(character>='a'&&character<='z'){
        printf("character is lowercase.");
    }
    else{
        printf("not english alphabet.");
    }
    return 0;
}