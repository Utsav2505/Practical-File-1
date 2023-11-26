//Q5- Program to check wether a no. is even or odd
//By- Utsav(AIDS-B1)
#include <stdio.h>//importing header files

int main(){
    int a;//declaring an integer variable to store input no.
    printf("Enter a no.: ");//label to get input no.
    scanf("%d",&a); //taking input no. from user

    //conditional statement-if the remainder on division of a with 2 is equal to 0 
    if(a%2==0){ 
        printf("Entered no. is Even");
        //then the input no. is even.
    }
    //connditional statement- else the no. is odd
    else{ 
        printf("Entered no. is Odd");
    }
    return 0;//return 0 after the program is done.
}