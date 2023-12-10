//Q10 (b)- Program to factorial using recursive
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h
#include <stdio.h>

//Creating a function to find factorial of each digit 
int factorial(int n){
 if(n>0){ //if n is not zero find the factorial
    return n*factorial(n-1); 
    // using recursion to find factorial
 }
 else if(n==0){ //else if n==0 return 1
    return 1;
 }
}
int main(){
    int a;//init a variable to store user input
    //print a label and take user input
    printf("Enter a num.: ");
    scanf("%d",&a);
    //print the factorial of entered num
    printf("Factorial of Entered num is: %lld",factorial(a));
    return 0;//return 0 after program is over
}