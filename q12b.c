//Q12 (b)- Program to take n values in array and print the sum of them
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
int sum(int n,int arr[]){
    int ans=0;//declaring a variable to store sum
    //init a loop starting from 0 and run till n-1
    for(int i=0;i<n;i++){
        ans += arr[i]; //adding values at aech array index
        //increment value of  i
    }
    return ans;//return the sum
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
    printf("The Sum of input nums is: %d",sum(n,arr));
    //return 0 after program is over
    return 0;

}