//Q9 (b)- Program to perform arithmetic operations using switch
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h
#include <stdio.h>

int main(){
    int s,a,b ;
    printf("**Calculator** \n");
    printf("Enter 1st Integer: ");
    scanf("%d",&a);
    printf("Enter 2nd Integer: ");
    scanf("%d",&b);
    printf("Select one of below to perform operations. \n (1)Addition \n (2)Subtraction \n (3)Multiplication \n (4)Division");
    printf("\n Enter the serial num: ");
    scanf("%d",&s);
    switch(s){
        case 1: printf("Sum is %d",a+b);
        break;
        case 2: printf("Difference is %d",a-b);
        break;
        case 3: printf("Product is %d",a*b);
        break;
        case 4: printf("Quotient is %f",a/b);
        break;
        default: printf("Enter Valid Serial no.");
        break;
    }
    return 0;
}