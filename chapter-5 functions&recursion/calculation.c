// int this program we will calculate area of rectangle ,square,circle //
#include<stdio.h>
int square(int side);
int rectangle(int length,int breadth);
int circle(int radius);
int main (){
    int side,length,breadth,radius;
    printf("enter the side to calculate area of square : ");
    scanf("%d",&side);
    int s = square(side);
    printf("Area of square is : %d\n",s);
    printf("enter the length and breadth to calculate area of rectangle : ");
    scanf("%d %d",&length,&breadth);
        int r = rectangle(length,breadth);
    printf("Area of rectangle is : %d\n",r);
        printf("enter the radius to calculate area of circle : ");
    scanf("%d",&radius);
            int c = circle(radius);
              printf("Area of circle is : %d\n",c);

return 0;

}
int square(int side){
    return side*side;
}
int rectangle(int length,int breadth){
    return length*breadth;
}
int circle(int radius){
    return 3.14*radius*radius;
}