// In this program we will use string copy library function//
#include<stdio.h>
#include<string.h>
int main () {
    // Creating a string oldstr//
    char oldstr[] = "oldstr";
    // Creating another string newstr//
    char newstr[] = "newstr";
    // Copying the contents of oldstr into newstr using strcpy()//
    strcpy(newstr, oldstr);
    // Printing the copied string//
    puts(newstr);
    return 0;
}
