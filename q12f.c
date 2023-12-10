//Q12 (f)- Program to sort an array in asc and desc
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
//Creating a func to sort array in ascending order
void ascending(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        //init an array starting from 0 and end at n-1
        for (int j = 0; j < n - i; j++) {
            //init an array starting from 0 and end at n-i
            if (arr[j] > arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }//increment j
    }//increment i
}
//Creating a func to sort array in descending order
void descending(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        //init an array starting from 0 and end at n-1
        for (int j = 0; j < n - i; j++) {
            //init an array starting from 0 and end at n-i
            if (arr[j] < arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }//increment j
    }//increment i
}
void print(int n, int arr[]){
    //print label to print output
    printf("Values in Array are: ");
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
    printf("Enter the size of Array1:");
    scanf("%d",&n);
    //declaring the array
    int arr[n];
    //calling inpu, asc, desc & print functions
    //after passing appropriate parameters
    input(n,arr);
    printf("Sorted in ascending \n");
    ascending(arr,n);
    print(n,arr);
    printf("\n Sorted in descending \n");
    descending(arr,n);
    print(n,arr);
    return 0;
}