//Q3 A-To find Sum & average of three nums.
//By Utsav(AIDS-B1)
#include <stdio.h> //Importing header files, in this case its stdio.h
int main(){
    int a,b,c; //declaring 3 integer variable to store the input integers.
    printf("Enter 1st no. "); //printing a label to receive an integer.
    scanf("%d",&a); //taking input from user for an integer
    
    printf("Enter 2nd no. "); //printing a label to receive an integer.
    scanf("%d",&b); //taking input from user for an integer
    
    printf("Enter 3rd no. "); //printing a label to receive an integer.
    scanf("%d",&c); //taking input from user for an integer

    printf("Sum of the entered nos. is: %d",a+b+c); //printing the sum in the output
    printf("Average of the entered nos. is: %d",(a+b+c)/3); //printing the average in output

    return 0; //Returning 0 from main funcn denoting program is finished.
}