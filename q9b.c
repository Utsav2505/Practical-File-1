//Q9 (b)- Program to perform arithmetic operations using switch
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h
#include <stdio.h>

int main(){
    int s,a,b ; //declaring variables to store input
    //Printing variables and taking inputs from user
    printf("**Calculator** \n");
    printf("Enter 1st Integer: ");
    scanf("%d",&a);
    printf("Enter 2nd Integer: ");
    scanf("%d",&b);
    printf("Select one of below to perform operations. \n (1)Addition \n (2)Subtraction \n (3)Multiplication \n (4)Division");
    printf("\n Enter the serial num: ");
    scanf("%d",&s);
    
    //switching around cases using the input in s 
    switch(s){
        //case 1 for printing sum
        case 1: printf("Sum is %d",a+b);
        break;//break out when done

        //case 1 for printing Diff
        case 2: printf("Difference is %d",a-b);
        break;//break out when done

        //case 1 for printing Prod
        case 3: printf("Product is %d",a*b);
        break;//break out when done

        //case 1 for printing Quotient
        case 4: printf("Quotient is %f",a/b);
        break;//break out when done

        //default case to handle invalid input by user
        default: printf("Enter Valid Serial no.");
        break;//break out when done
    }

    return 0;//return 0 when program is finished.
}