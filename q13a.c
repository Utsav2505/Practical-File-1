//Q13 (a)- Program to add two matrices
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h
#include <stdio.h>

//Creating a function to take input from user
void input(int order,int arr[order][order]){
    //init a loop starting from 0 and run till n-1
    for(int i=0;i<order;i++){
        for(int j=0;j<order;j++){
            int a; //declaring a variable to store input
            //printing label and taking input
            printf("Enter elements at row %d \n",i+1);
            printf("Enter value at index <%d><%d>: ",i+1,j+1);
            scanf("%d",&a);
            //assigning values at each array indexes
            arr[i][j]=a;
            //increment value of i after end of code block
        }
    }
}
//Create a func to find sum of both matrice
void sum(int order, int arr1[order][order],int arr2[order][order],int result[order][order]){
    for(int i=0;i<order;i++){     
        //init a loop starting from 0
        //and run until it becomes i=order-1       
        for(int j=0;j<order;j++){
            //init a loop starting from 0
            //and run until it becomes i=order-1
            result[i][j]=arr1[i][j]+arr2[i][j];
            //adding the elements
        }
    }
}
void print(int order,int result[order][order]){
    //print label to print output
    printf("Values in Final Matrix are: \n");
    //init a loop starting from 0
    //and run until it becomes i=order-1
    for(int i=0;i<order;i++){
        for(int j=0;j<order;j++){
            printf("<%d>: ",result[i][j]);
            //assigning values at each array indexes
            //increment value of i after end of code block
        }
        printf("\n");
    }
}
int main(){
    int order;
    //printing label and taking input
    printf("Enter the order of Matrices:");
    scanf("%d",&order);
    int arr1[order][order];
    int arr2[order][order];
    int result[order][order];
    //taking input for arr1 and arr2
    input(order,arr1);
    input(order,arr2);
    //adding both the matrices
    sum(order,arr1,arr2,result);
    //printing the resulting matrices
    print(order,result);
    return 0;
}