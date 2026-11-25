/* in this program we will scan data from file and will store it in a variable and then print it 
*/
#include<stdio.h>
int main (){
    FILE *fptr; // Declaring a file pointer//
    fptr=fopen("test.txt","r"); // Opening the file in read mode//
    char ch; // Declaring a character variable to store characters//
    fscanf(fptr,"%c",&ch); // Reading the first character from the file//
    printf("character is = %c\n",ch); // Printing the first character//
    fscanf(fptr,"%c",&ch); // Reading the second character//
    printf("character is = %c\n",ch); // Printing the second character//
    fscanf(fptr,"%c",&ch); // Reading the third character//
    printf("character is = %c\n",ch); // Printing the third character//
    fscanf(fptr,"%c",&ch); // Reading the fourth character//
    printf("character is = %c\n",ch); // Printing the fourth character//
    fscanf(fptr,"%c",&ch); // Reading the fifth character//
    printf("character is = %c\n",ch); // Printing the fifth character//
    if(fptr == NULL) {
    printf("File not found!");
    return 1;
    }
    fclose(fptr); // Closing the file//

    return 0;
}