//Q11 (a)- Program to GCD(Greatest Common Divisor) using recursive
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h
#include <stdio.h>

//Creating a recursive func to find GCD
int gcd(int a, int b){
    if(b==0){//return the value of a when b=0
        return a;
    }
    else{//else return the gcd of b & a%b
        return gcd(b,a%b);
    }
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