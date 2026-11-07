/* in this we have equal precedence so like will get a situation when there is a big 
statement to solve with same precedence so there's a rule called associative rule which 
like in this compiler will solve the statement in left to right order */
#include<stdio.h>
int main () {
    int a = 4*3/6*2; //here calculation will happen fromm left to right//
    printf(" the output is : %d",a);
    return 0;
}