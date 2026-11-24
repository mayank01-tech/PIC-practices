// in this program we will pass structure to a function as an argument//
#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    char name[100];
    float cgpa;
};
void printInfo(struct student s1);
int main () {
    struct student s1;
    s1.roll=1;
    s1.cgpa=97.00;
    strcpy(s1.name,"mayank");
    printInfo(s1);
    return 0;
}
void printInfo(struct student s1){
 printf("student name is = %s\n",s1.name);
 printf("student roll no is = %d\n",s1.roll);
 printf("student cgpa is = %f\n",s1.cgpa);
}