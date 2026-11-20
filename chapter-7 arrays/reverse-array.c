// in this program we are going to reverse an array //
#include<stdio.h>
void reverseArray(int arr[], int n);
void printArray(int *arr, int n);
int main (){
    int arr[]={12,23,24,11,45};
    reverseArray(arr,5);
    printArray(arr,5);
    return 0;
}

void reverseArray(int arr[],int n){
    // Loop array ke first half tak chalega.//
    // Kyunki hume first aur last elements ko aapas mein swap karna hai.//
    for(int i=0;i<n/2;i++){
        // Current index (i) ki value ko temporary variable mein save kar rahe hain.//
        // Taaki swap karte time original value lose na ho.//
        int first_val=arr[i];
        // Array ke last se element access kar rahe hain.//
        // n-i-1 se last element ka index milta hai.//
        int second_val=arr[n-i-1];
        // Last element ki value ko current first position par rakh rahe hain.//
        arr[i]=second_val;
        // Pehle save ki hui first value ko last position par rakh rahe hain.//
        // Is tarah dono elements swap ho jaate hain.//
        arr[n-i-1]=first_val;
    }
}

void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",*(arr+i));
    }
}

