// in this program we will write data into a file using fprintf method//
#include<stdio.h>
int main () {
    FILE *fptr; // Declaring a file pointer//
    fptr=fopen("test3.txt","w"); // Opening test3.txt in write mode//
    fprintf(fptr,"%c",'A'); // Writing character A into the file//
    fprintf(fptr,"%c",'p'); // Writing character p into the file//
    fprintf(fptr,"%c",'p'); // Writing character p into the file//
    fprintf(fptr,"%c",'l'); // Writing character l into the file//
    fprintf(fptr,"%c",'e'); // Writing character e into the file//
    fclose(fptr); // Closing the file//
    return 0;
}