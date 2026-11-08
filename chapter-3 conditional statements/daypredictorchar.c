// in this program we  will use switch case statement //
#include<stdio.h>
int main () {
    char day;
    printf("enter character between a to g to predict the day  : ");
    scanf("%ch",&day);
    switch(day){
        case 'a':
        printf("today is monday");
        break;
        case 'b':
        printf("today is tuesday");
        break;
        case 'c':
        printf("today is wednesday");
        break;
        case 'd':
        printf("today is thursday");
        break;
        case 'e':
        printf("today is friday");
        break;
        case 'f':
        printf("today is saturday");
        break;
        case 'g':
        printf("today is sunday");
        break;
        default :
        printf("sorry unable to predict");
        break;
    }
    return 0;
}