// in this program we are going to make an structure array which will store 10 student details//
#include<stdio.h>

// Structure to store student details//
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main () {
    struct student s[10]; // Array of 10 students//

    // Taking input of 10 students//
    for(int i = 0; i < 10; i++) {
        printf("Enter the details for student no. %d\n",i+1);
        printf("Enter student name = ");
        scanf("%99s",s[i].name);
        printf("Enter student roll no = ");
        scanf("%d",&s[i].roll);
        printf("Enter student cgpa = ");
        scanf("%f",&s[i].cgpa);
    }

    // Displaying details of all students//
    for(int i = 0; i < 10; i++) {
        printf("\nStudent name is : %s\n",s[i].name);
        printf("Student roll no is : %d\n",s[i].roll);
        printf("Student cgpa is : %f\n",s[i].cgpa);
    }

    return 0;
}