//Q3-Program to find sum of individual digits of a given +ve num.
//By Utsav(AIDS-B1)
#include <stdio.h> //Importing header files, in this case its stdio.h
int main(){
    int a; //declaring a integer variable to store the input integers.
    printf("Enter a Positive no. "); //printing a label to receive an integer.
    scanf("%d",&a); //taking input from user for an integer

    int sum=0; // declaring a variable sum to store the sum of digits
    while(a!=0){
        //getting the last digit of the entered num
        int digit = a%10;
        sum += digit; //adding every digit to the existing sum
        a /= 10;

    }
    //printing the value in sum variable in the output
    printf("Sum of the digits of entered num is: %d", sum);

    return 0; //Returning 0 from main funcn denoting program is finished.
}