// in this program we will predict grade for the student according to their marks //
#include<stdio.h>
int main(){
    int marks;
    printf("please enter your marks to check which grade you got : ");
    scanf("%d",&marks);
if (marks<30){
    printf("grade  is C");
} else if(marks>=30 && marks<70){
    printf("grade is B");
}
else if (marks>=70 && marks<90){
    printf("grade is A");
}
else if ( marks>=90 && marks<=100){
    printf("grade is A+");
}
else{
    printf("invalid marks");
}
    return 0;
}