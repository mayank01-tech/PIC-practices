// in this program wer are going to do swapping//
#include<stdio.h>
void swap(int a,int b);
void _swap(int *a,int *b);
int main (){
    int x=3,y=5,tmp;
    swap(x,y);
      printf("x=%d & y=%d\n",x,y);
    _swap(&x,&y);
      printf("x=%d & y=%d\n",x,y);

    return 0;
}
void swap(int a,int b){
    int tmp = a;
    a=b;
    b=tmp;
    printf("a=%d & b=%d\n",a,b);
}
void _swap(int *a,int *b){
    int tmp = *a;
    *a=*b;
    *b=tmp;
    printf("a=%d & b=%d\n",*a,*b);
}
