//Q10 (a)- Program to factorial without recursive
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h
#include <stdio.h>

//Creating a non recursive function to get factorial
long long factorial(int n){
    if(n>0){//finding factorial only when num >0
        long long ans;//declaring a long long variable
        // to store long answers
        for(int i=1;i<=n;i++){
            //init a loop from 1 to n
            ans *= i; //multiply the value of i everytime with ans 
        }//increment the value of i when the codeblock ends
        return ans;//return the value of ans
    }
    else{//printing bad input when n<0
        printf("Bad Input");
    }
}
int main(){
    int a;//init a variable to store user input
    //print a label and take user input
    printf("Enter a num.: ");
    scanf("%d",&a);
    //print the factorial of entered num
    printf("Factorial of Entered num is: %lld",factorial(a));
    return 0;//return 0 after program is over
}