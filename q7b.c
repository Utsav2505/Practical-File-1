//Q7- Program to check input no. is armstrong or not
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h and stdbool.h
#include<stdio.h>
#include<math.h>

//creating a function to count 
//number of digits present in the entered number
int countDigits(int a){//creating a parameter to take the entered num
    int count=0; //declaring a count integer as 0 initially
    if(a<0){ //if the entered num is -ve - make it positive
        a *= -1;
    }
    while(a!=0){ //starting a loop which will run untill a is not equal to 0
        int digit = a%10; //extracting the digit from the end of the entered num
        count++; //incrementing the count by 1 whenever a digit is extracted
        a /= 10; //dividing the num by 10 to eliminate the last digit as its already counted
    }
    return count; //returning the count num 
}

int main(){
    int a;//declaring a int variable to store input num
    printf("enter a no.: ");//printing the label for input 
    scanf("%d",&a);//taking input in from user

    int size = countDigits(a); //getting the size of the entered num 
    //by passing the entered num to our defined function
    int sum =0; //declaring the sum initially to be 0
    int original = a; //storing the entered num in another variable 
    //as we will be manipulating the entered num
    
    while(a!=0){//starting a loop which will run untill a is not equal to 0
        int digit = a%10; //extracting the digit from the end of the entered num
        sum += pow(digit,size);
        //getting the value of digit raised to the power the size of the entered num
        //and then adding the value to the sum
        a /= 10;//dividing the num by 10 to eliminate the last digit as operation on its already done
    }
    if(sum==original){ //if the sum that we generated is equal to the entered num
    //then print that the entered num is an armstrong num
        printf("Entered num is armstrong");
    }
    else{//else print its not an armstrong
        printf("Entered num is not armstrong");
    }
    return 0;//return 0 after the program is done.

}