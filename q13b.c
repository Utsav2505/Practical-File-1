//Q13 (b)- Program to multiply two matrices
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
void multiply(int order, int arr1[order][order], int arr2[order][order], int result[order][order]){
    // Loop through each row of arr1
    for(int i = 0; i < order; i++){
        // Loop through each column of arr2
        for(int j = 0; j < order; j++){
            result[i][j] = 0; // Initialize the result at (i, j) to zero
            // Multiply the corresponding elements of arr1 and arr2 and accumulate the sum
            for(int k = 0; k < order; k++){
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
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
    printf("\n Enter elements of Matrix1 \n");
    input(order,arr1);
    printf("\n Enter elements of Matrix2 \n");
    input(order,arr2);
    //multiplying both the matrices
    multiply(order,arr1,arr2,result);
    //printing the resulting matrices
    print(order,result);
    return 0;
}