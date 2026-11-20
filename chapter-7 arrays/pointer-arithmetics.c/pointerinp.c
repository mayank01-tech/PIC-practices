// in this program we are going to point pointer at array 0th index and will increase it //
#include<stdio.h>
int main  () {
    int aadhar[5];
    int *ptr=&aadhar[0];
    //input//
    /* iss loop m na bro kya hua h smjho dekho print kiya pehle ye puchne ke liye i index pe 
    kya value dalu fir scan kiya  aur jo pointer point kiya tha usko i se bdhaya 
    yani ki bhai jese ptr m 0th index p value agyi 12 manlo fir ptr ko plu kiya i se i hua 1 toh 
    ptr pe jo adhar 0th index p tha ab voh chlagya aadhar 1st index pe ok
    */
    for(int i = 0 ; i <5;i++){
        printf(" value for index  %d :",i);
        scanf("%d",(ptr+i));
    }
    //output//
    /*isko dekho ye bhi same h udhar kya tha ki address p value jari thi aur store hojari thi
    lekin idhar address p jo value h usse print rkane ke liye (*astrick) iska use krna pda*/
    for(int i = 0 ; i <5;i++){
        printf("value at index %d : %d \n",i,*(ptr+i));
        
    }
    return 0;
}