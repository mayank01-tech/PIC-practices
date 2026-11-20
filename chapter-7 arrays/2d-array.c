// in this program we are going to create a 2d array //
#include<stdio.h>
int main  ()  {
    // we are going to store two student marks //
    // first two refers to two row and 3 to three column//
    int arr[2][3]={{56,45,34},{75,45,34}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d %d marks are : %d\n",i,j,arr[i][j]);
        }
    }
    return 0;
}