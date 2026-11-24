// in this program we will declare a pointer and will try to access structure value using pointer//
#include<stdio.h>
#include<string.h>
// Structure to store student details//
struct student {
    int roll_no;
    float cgpa;
    char name[100];
};

int main () {
    struct student s1; // Declaring a structure variable//
    struct student *ptr; // Declaring a structure pointer//
    ptr = &s1; // Storing the address of structure variable in pointer//
    s1.roll_no = 12; // Assigning roll number//
    s1.cgpa = 8.0; // Assigning CGPA//
    strcpy(s1.name,"mayank"); // Assigning student name//
    // Accessing structure member using pointer//
    printf("%d",(*ptr).roll_no);

    return 0;
}