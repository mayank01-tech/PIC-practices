// in this program we will use structures which are the user defined data type. //
#include<stdio.h>
#include<string.h>
// Structure to store student details//
struct student{
    int roll_no;
    float cgpa;
    char name[100];
};
int main () {
    struct student s1; // Structure variable declaration//
    s1.roll_no=12; // Assigning roll number//
    s1.cgpa=8.0; // Assigning CGPA//
    strcpy(s1.name,"mayank"); // Copying name into structure string//
    // Printing student details//
    struct student s2={13,8.7,"rahul"};
    printf("%s %d %f\n",s1.name,s1.roll_no,s1.cgpa);
    printf("%s %d %f\n",s2.name,s2.roll_no,s2.cgpa);

    return 0;
}