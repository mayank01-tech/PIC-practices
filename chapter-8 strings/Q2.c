// Is program mein hum string ki length count karenge//
#include<stdio.h>
// Function declaration:
// Ye function string ko receive karega aur uski length return karega//
int countLength(char arr[]);
int main (){
    // 100 characters store karne ke liye character array banaya//
    char str[100];
    // User se string input lene ke liye//
    printf("enter the string : ");
    // fgets() user se input leta hai aur maximum 99 characters + '\0' store kar sakta hai//
    // stdin ka matlab standard input yani keyboard hai//
    fgets(str,100,stdin);
    // countLength() function ko string pass kar rahe hain//
    // Function se jo length return hogi, use print karenge//
    printf("length is : %d",countLength(str));
    return 0;
}

// Function definition://
int countLength(char arr[]){
    // Count variable initially 0 rakha hai//
    // Ye string ke characters ki counting karega//
    int count = 0;
    // Loop tab tak chalega jab tak string ka ending character '\0' nahi milta//
    for(int i = 0; arr[i] != '\0'; i++){
        // Har character milne par count ko 1 se increase kar rahe hain//
        count++;
    }
    // fgets() input ke end mein newline '\n' store kar sakta hai.
    // Is program mein hum assume kar rahe hain ki newline present hai,
    // isliye usko exclude karne ke liye 1 subtract kar rahe hain.
    return count - 1;
}
