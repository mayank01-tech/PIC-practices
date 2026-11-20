// in this program we will pass an array as an argument //
#include<stdio.h>
void printNum(int arr[],int n);
int main (){
int arr[]={32,45,65,34,24,321,343,233};
printNum(arr,8);
return 0;
}
void printNum(int arr[],int n){
    for(int i = 0 ;i<n;i++){
        printf("%d  \t",arr[i]);
    }
}