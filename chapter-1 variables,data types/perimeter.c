// in this program we are going to calculate perimeter of rectangle //
#include<stdio.h>
int main(){
    float length,breadth;
    printf("enter length and breadth to find perimeter of rectangle : ");
    scanf("%f %f",&length,&breadth);
    printf("perimeter of rectangle is : %f",2*(length+breadth));
    return 0;
}