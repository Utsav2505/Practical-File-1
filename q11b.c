//Q11 (b)- Program to GCD(Greatest Common Divisor) using recursive
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h
#include <stdio.h>

//Creating a func to find GCD
int gcd(int a, int b){
    while(b!=0){//iniit a loop that will run until b becomes zero
        int temp =b; //storing the value of b in a temp variable
        b=a%b; //replacing the value of b with the value of a%b
        a=temp; //replacing the value of a with temp in a 
    }
    return a;//return a 
}
int main(){
    int a,b;//init variables to store user input
    //print a label and take user input
    printf("Enter a num.: ");
    scanf("%d",&a);
    printf("Enter a num.: ");
    scanf("%d",&b);
    //print the GCD of entered num
    printf("GCD of %d & %d is: %d",a,b,gcd(a,b));
    return 0;//return 0 after program is over
}