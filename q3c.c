//Q3-Program to generate first n terms of a fibonacci seq.
//By Utsav(AIDS-B1)
#include <stdio.h> //Importing header files, in this case its stdio.h
int main(){
    int a; //declaring a integer variable to store the input integers.
    printf("Enter a no. "); //printing a label to receive an integer.
    scanf("%d",&a); //taking input from user for an integer

    // Conditional/Ternary operator - is 'a' greater than or equal to 0 '?'
    //, If yes then print "Entered no. is POSITIVE" 
    //otherwise ':' print "Entered no. is NEGATIVE";
    (a>=0) ? printf("Entered no. is POSITIVE") : printf("Entered no. is NEGATIVE");

    return 0; //Returning 0 from main funcn denoting program is finished.
}