//Q12 (a)- Program to take n values in array and print in reverse order
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
void print(int n, int arr[]){
    //print label to print output
    printf("Values of array in reverse order: ");
    //init a loop starting from end index of array(n-1) 
    //and run until it becomes zero
    for(int i=n-1;i>=0;i--){
        //print the value at each index
        printf("%d , ",arr[i]);
        //decrement the value of i after end of code block
    }
}
int main(){
    int n;//declaring a variable to store input
    //printing label and taking input
    printf("Enter the size of array:");
    scanf("%d",&n);
    //declaring the array
    int arr[n];
    //calling input function and print function
    //after passing appropriate parameters
    input(n,arr);
    print(n,arr);
    //return 0 after program is over
    return 0;

}