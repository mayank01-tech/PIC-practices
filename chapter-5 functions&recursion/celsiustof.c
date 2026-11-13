// in this program we will convert celcius into fehraniet//
#include<stdio.h>
float convert(float c);//function declaration//

int main () {
    float c;
    printf("enter the celcius : ");
    scanf("%f",&c);
 float result=convert(c);//function call//
printf("faherenhiet is : %f",result);
 return 0;
}
//function definition//
float convert(float c){
 float res=c * (9.0/5.0) +32;
 return res;
}