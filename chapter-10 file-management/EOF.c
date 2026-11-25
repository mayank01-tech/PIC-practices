// in this we will read data from file and will check and if it ch equals to EOF we will stop//
#include<stdio.h>
int main (){
    FILE *file; // Declaring a file pointer//
    file=fopen("test.txt","r"); // Opening test.txt in read mode//
    char ch; // Declaring a character variable//
    ch=fgetc(file); // Reading the first character from the file//
    while(ch!=EOF){ // Loop continues until the end of the file//
        printf("%c",ch); // Printing the current character//
        ch=fgetc(file); // Reading the next character//
    }
    printf("\nEOF\n"); // Printing EOF after reaching the end of the file//
    fclose(file); // Closing the file//
    return 0;
}