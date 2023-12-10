//Q8 (b)- Program to check input no. is Strong num or not
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
    int a =0; //declaring a int variable to store input num.
    printf("Enter a num:"); //Printing the label to get input
    scanf("%d",&a); //taking input from the user

    int original = a; //storing the original num 
    //as we will be operating on 'a'.
    int sum=0; //declaring a variable sum =0
    while(a!=0){ //initializing a loop that will run
    //till 'a' not becomes zero.
        int digits = a%10; //getting each digits 
        //from the end of the entered num.
        sum += factorial(digits); //Adding the factorial of the digits in sum
        a /= 10; //Eliminating the last digit as the operations on it are already done.
    }
    if(sum == original){ //if the final sum is equal to the original num entered
        printf("Entered num is a Strong num.");
        //print the entered num is strong num
    }
    else{ //else print its not a strong num.
        printf("Entered num is not a Strong num.");
    }
 return 0; //return 0 when program is finished.
}
    