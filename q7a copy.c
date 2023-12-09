//Q7- Program to generate prime nums 1 to n
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h and stdbool.h
#include<stdio.h>
#include<stdbool.h>

//creating a function to check if a num 'a' is prime or not
bool prime(int a){
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
        return true;
    }
    //conditional statement- else print entered no. is not prime 
    else{
        return false;
    }
}

int main(){
    int a;//declaring a int variable to store input num
    printf("enter a no.: ");//printing the label for input 
    scanf("%d",&a);//taking input in from user
    for(int i=2; i<=a;i++){//initializing a loop starting from i=2 and run till i <=a
    //and incrementing i after every end of the code block
        if(prime(i)){ //check if the num i is prime or not by call our defined function
            printf("%d,",i); //printing the num if its prime
        }
        else{//else continue the loop
            continue;
        }
    }
    return 0;//return 0 after the program is done.

}