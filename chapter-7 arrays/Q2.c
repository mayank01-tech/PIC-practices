/* in this program we will pass a array as an argument and will check all the values in array and 
will print only odd values */
#include<stdio.h>
void printOdd(int *arr,int n);
int main (){
int arr[]={12,23,24,11,45};
printOdd(arr,5);
return 0;
}
void printOdd(int *arr,int n){
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            printf("%d \t",*(arr + i));
        }
        else{
            continue;
        }
    }
}