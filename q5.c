//Q4-Program to decide which of entered nos. is greater
//By- Utsav (AIDS-B1)

#include <stdio.h> //Importing header file

int main(){
    int a,b; //declaring integer variables to store input data
    printf("Enter 1st no. :"); //label for 1st input
    scanf("%d",&a); //input from user

    printf("Enter 2nd no. :"); //label for 2nd input
    scanf("%d",&b); //input from user

    if(a>b){ //conditional statement- if a is greater than b
        printf("1st No. is Greater than 2nd No."); 
        //then print, 1st is greater than 2nd
    }
    else if(a==b){ //conditional statement- else if a is equal to b 
        printf("Both no. are equal");
        //then print both are equal
    }
    else{ //conditional statement- else print b is greater than a 
        printf("2nd No. is Greater than 1st No.");
    }
    return 0; //return 0 after executing all above code blocks
}