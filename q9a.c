//Q7- Program to check input no. is Strong num or not
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h and math.h
#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c; //Declaring variables to store inputs
    printf("Program to find the roots of equation \n ax^2+bx+c=0 \n");
    //printing labels and taking input from user.
    printf("Enter the value of 'a': ");
    scanf("%d",&a);
    printf("Enter the value of 'b': ");
    scanf("%d",&b);
    printf("Enter the value of 'c': ");
    scanf("%d",&c);

    //equation to find roots : x = (-b+ sqrt(b^2-4ac))/(2a)

    //to check if entered nums will give out distinct & real roots 
    //(b^2-4ac)>0
    //to check if entered nums will give out equal & real roots 
    //(b^2-4ac)=0
    //to check if entered nums will give out imaginary roots 
    //(b^2-4ac)<0

    int discriminant = (pow(b,2)-4*a*c);
    //storing the value of discriminant
    if(discriminant > 0){//if the discriminat is > than 0
        int r1 = ((-1*b)+discriminant)/2*a;
        //Finding the roots using the formula
        int r2 = ((-1*b)-discriminant)/2*a;
        //Printing the roots in the output.
        printf("The equation has real & distinct roots \n");
        printf("The roots are %d and %d",r1,r2);
    }
    else if(discriminant == 0){//if the discriminat is = to 0
    //Finding the roots using the formula
        int r = (b)/2*a;
        //Printing the roots in the output.
        printf("The equation has real & equal roots \n");
        printf("The root is %d .",r);
    }
    else if(discriminant < 0){//if the discriminat is < than 0
    //Printing the roots are imaginary.
        printf("The equation has Imaginary roots");
    }
    else{ //else the input is bad.
        printf("Error: Bad Input");
    }
    return 0;//returning 0 when program is finished

}