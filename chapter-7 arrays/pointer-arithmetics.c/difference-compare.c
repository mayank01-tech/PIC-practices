// in this program we are going to comapre two pointers and even will get the difference between them //
#include<stdio.h>
int main (){
    int age  = 18;
    int _age=19;
    int *ptr=&age;
    int *_ptr=&_age;
    printf ( "%u,%u\ndifference = %u\n",ptr,_ptr,ptr-_ptr);
    printf ( "comparison = %u\n",ptr==_ptr);
    return 0;

    
}