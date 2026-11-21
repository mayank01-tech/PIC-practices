// in this program we will compare strings using library function //
#include<stdio.h>
#include<string.h>
int main () {
    // Creating the first string//
    char firststr[] = "Banana";
    // Creating the second string//
    char secondstr[] = "apple";
    // Creating the third string, which is same as firststr//
    char thirdstr[] = "Banana";
    // Comparing secondstr with firststr; positive value means secondstr is greater//
    printf("%d\n",strcmp(secondstr,firststr));
    // Comparing firststr with secondstr; negative value means firststr is smaller//
    printf("%d\n",strcmp(firststr,secondstr));
    // Comparing firststr with thirdstr; 0 means both strings are equal//
    printf("%d\n",strcmp(firststr,thirdstr));
    return 0;
}