/* in this program we will create a alias of structure name in simple language alias is a nickname
like how we have nickname mm for eg mayank ka nickname ashu so yaah jese structure name ho student
to uska alias uska nickname bnayenge stu*/
#include<stdio.h>
#include<string.h>
// Creating a structure and giving it an alias using typedef//
typedef struct student {
    int roll;
    char name[100];
    float cgpa;
} stu; // 'stu' can now be used instead of 'struct student'//
int main () {
    stu s1; // Declaring a structure variable using typedef//
    s1.roll = 1; // Assigning roll number//
    s1.cgpa = 97.00; // Assigning CGPA//
    strcpy(s1.name, "mayank"); // Copying name into structure member//
    // Printing student details//
    printf("student name is = %s\n", s1.name);
    printf("student roll no is = %d\n", s1.roll);
    printf("student cgpa is = %f\n", s1.cgpa);
    return 0;
}
