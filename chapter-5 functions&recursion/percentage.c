//in this program we are going to calculate percentage of student according to 3 subject marks //
#include<stdio.h>
int percentage(int math,int english,int science);

int main (){
    int math,english,science;
    printf("enter the marks of maths,english & science : ");
    scanf("%d %d %d",&math,&english,&science);
    int result = percentage(math,english,science);
    printf("percentage is : %d\n",result);

return 0;

}
int percentage(int math,int english,int science){
    return ((math+english+science)/3);
}
