//Q7- Program to check input no. is Perfect numor not
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h
#include<stdio.h>

int main(){
    int a;//declaring a int variable to store input num
    printf("enter a no.: ");//printing the label for input 
    scanf("%d",&a);//taking input in from user

    int sum =1; //declaring the sum with zero 
    //as 1 is always a factor of a perfect no.
    for(int i=2;i<=a/2;i++){
        //Staring a loop with i=2(as 1 is already included)
        //as checking should start from 2 
        //will run until i is less than half of the input num
        if(a%i ==0){
            //check if i is a factor of entered num
            sum += i;
            //if i is a factor add it into the sum
        }
    }
    if(sum == a){// if the sum generated is equal to the entered no. 
    //then it is a perfect num
        printf("entered no. is a Perfect num");
        //print that the entered num is a perfect num in te output
    }
    else{//else print that the entered num is not perfect num in te output
    
        printf("entered no. is not a Perfect num");
    }

    return 0; //return 0 after the program is finished
}