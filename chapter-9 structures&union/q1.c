// in this program i will create a student structure in we will have 3 students data//
#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    char name[100];
    float cgpa;
};
int main () {
    struct student s1,s2,s3;
    s1.roll=1;
    s1.cgpa=97.00;
    strcpy(s1.name,"mayank");
    printf("student name is = %s\n student roll no is = %d\n student cgpa is = %f\n",s1.name,s1.roll,s1.cgpa);
    s2.roll=2;
    s2.cgpa=95.00;
    strcpy(s2.name,"aryan");
    printf("student name is = %s\n student roll no is = %d\n student cgpa is = %f\n",s2.name,s2.roll,s2.cgpa);
    s3.roll=3;
    s3.cgpa=98.00;
    strcpy(s3.name,"bhupender");
    printf("student name is = %s\n student roll no is = %d\n student cgpa is = %f\n",s3.name,s3.roll,s3.cgpa);
    return 0;
}