// in this program we will use  ternary operator to check whether student is passed or failed//
#include<stdio.h>
int main(){
    int marks;
    printf("please enter your marks to check whether you are passed or failed : ");
    scanf("%d",&marks);
if (marks<=30){
    printf("better luck next time!");
} else if(marks>30 && marks<=100){
    printf("congratulations you have passed the exams.");
}
else{
    printf("please enter valid marks.");
}
    return 0;
}