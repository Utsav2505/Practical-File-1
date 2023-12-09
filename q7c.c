//Q7- Program to check input no. is armstrong or not
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h
#include<stdio.h>

int main(){
    int a,b,x,result;//declaring a int variable to store input num
    printf("Program to evaluate the expression \n (ax + b)/(ax - b)\n");
    printf("a: ");//printing the label for input 
    scanf("%d",&a);//taking input in from user
    printf("b: ");//printing the label for input 
    scanf("%d",&b);//taking input in from user
    printf("x: ");//printing the label for input 
    scanf("%d",&x);//taking input in from user

    result = (a*x + b)/(a*x - b);
    //finding the value of expression by adding the values of each variables 
    //and then inserting it to result variable

    printf("Answer is: %d",result);
    //printing the final result in the output

    
    return 0;//return 0 after the program is done.

}