/* in this program we will scan data from file and will store it in a variable and then print it 
*/
#include<stdio.h>
int main (){
    FILE *fptr; // Declaring a file pointer//
    fptr=fopen("test2.txt","r"); // Opening the file in read mode//
    int value; // Declaring a integer variable to store integers//
    fscanf(fptr,"%d",&value); // Reading the first value from the file//
    printf("value is = %d\n",value); // Printing the first value//
    fscanf(fptr,"%d",&value); // Reading the first value from the file//
    printf("value is = %d\n",value); // Printing the first value//
    fscanf(fptr,"%d",&value); // Reading the first value from the file//
    printf("value is = %d\n",value); // Printing the first value//
    if(fptr == NULL) {
    printf("File not found!");
    return 1;
    }
    fclose(fptr); // Closing the file//

    return 0;
}