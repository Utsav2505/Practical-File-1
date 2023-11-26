//Q6- Program to check if a no. is even or odd.
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h and stdbool.h
#include<stdio.h>
#include<stdbool.h>
int main(){
    int a; //declaring an integer variale to store input no.
    printf("Enter a no.: "); //label to input a no.
    scanf("%d",&a); //taking integer input from user

    //declaring a bool type variable and setting it as false by default
    bool isPrime=false;

    //conditional statement- if entered no. is greater than 3
    //then proceed and check it for prime or not 
    if(a>3){
        //initializing a loop starting with i=2 and will end when i is just smaller than entered no.
        //incrementing i after every end of code block
        for(int i=2;i<a;i++){
            //conditional statement- if the entered no. on division with all the nos. 
            //which are smaller than the entered no. and greater and equal to 2
            //gives remainder 0, then the entered no. is not prime
            if(a%i==0){
                isPrime=false;
                break;
            }
            //conditional statement- else the entered no. is prime
            else{
                isPrime=true;
            }
        }
    }
    //conditional statement- if the entered no. is 2 or 3
    //then the entered no. is prime
    else if(a==2 || a==3){
        isPrime=true;
    }

    //conditional statement-if the entered no. is prime
    //print entered no. is prime 
    if(isPrime){
        printf("Entered no. is Prime");
    }
    //conditional statement- else print entered no. is not prime 
    else{
        printf("Entered no. is not Prime");
    }
    return 0; //return 0 after program is successfully implemented
}