//Q12 (c)- Program to take n values in array and print the sum of them
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h
#include <stdio.h>

//Creating a function to take input from user
void input(int n,int arr[]){
    //init a loop starting from 0 and run till n-1
    for(int i=0;i<n;i++){
        int a; //declaring a variable to store input
        //printing label and taking input
        printf("Enter value at index <%d>: ",i);
        scanf("%d",&a);
        //assigning values at each array indexes
        arr[i]=a;
        //increment value of i after end of code block
    }
}
void copy(int n, int arr[],int arr2[]){
    //init a loop starting from 0 and run till i=n-1
    for(int i=0;i<n;i++){
        //assigning values of arr2 to arr at each index
        arr2[i]=arr[i];
    }
}
void print(int n, int arr2[]){
    //print label to print output
    printf("Values in Array2 are: ");
    //init a loop starting from end index of array(n-1) 
    //and run until it becomes zero
    for(int i=n-1;i>=0;i--){
        //print the value at each index
        printf("%d , ",arr2[i]);
        //decrement the value of i after end of code block
    }
}
int main(){
    int n;//declaring a variable to store input
    //printing label and taking input
    printf("Enter the size of Array1:");
    scanf("%d",&n);
    //declaring the array
    int arr[n];
    //calling input function, copy and print function
    //after passing appropriate parameters
    input(n,arr);
    int arr2[n];
    copy(n,arr,arr2);
    //printing label 
    printf("Array1 to copied to Array2 \n");
    print(n,arr2);
    //returning 0 after program ends
    return 0;
}