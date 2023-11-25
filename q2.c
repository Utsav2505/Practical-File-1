//Q2- Program of Sum
//Created by Utsav(AIDS-B1)
#include <stdio.h> //Importing the header files in this case, stdio.h

int main(){
    int a=0,b=0; //declaring variables to store input by user
    printf("Enter 1st no."); //Printing some labels for 1st integer.
    scanf("%d",&a); //Taking Input from user for a.
    printf("Enter 2nd no."); //Printing some labels for 2nd integer.
    scanf("%d",&b); //Taking Input from user for b.
    int sum = a+b; //declaring a variable to store the sum of both above integers
    printf("The Sum of Both no. is %d",sum); //Printing the sum
    return 0; //returning 0 after program is finished
}