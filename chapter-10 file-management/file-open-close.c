// in this program we will use write mode so that our file will generated automatically//
#include<stdio.h>
int main (){
    FILE *fptr; // Declaring a file pointer//
    fptr=fopen("test.txt","w"); // Opening test.txt in write mode//
    fclose(fptr); // Closing the file//
    return 0;
}