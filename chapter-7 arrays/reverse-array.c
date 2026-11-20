// in this program we are going to reverse an array //
#include<stdio.h>
void reverseArray(int arr[],int n);
void printArray(int *arr,int n);
int main (){
int arr[]={12,23,24,11,45};
reverseArray(arr,5);
printArray(arr,5);
return 0;
}
void reverseArray(int arr[],int n){
    for(int i=0;i<n/2;i++){
     int first_val=arr[i];
     int second_val=arr[n-i-1];
     arr[i]=second_val;
     arr[n-i-1]=first_val;
    }
}
void printArray(int *arr,int n){
    for(int i = 0;i<n;i++){
        printf("%d\t",*(arr+i));
    }
}
