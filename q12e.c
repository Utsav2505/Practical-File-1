//Q12 (e)- Program to find max and min in an array
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h
#include <stdio.h>
#include <limits.h>

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
//Creating a function to find min in an array
int min(int arr[],int n){
    int min = INT_MAX;
    //Set a variable with maximum possible num
    for(int i=0;i<n;i++){
        //init a loop starting from 0 and end at n-1
        if(min>arr[i]){
            //if min is > than arr[i]
            //assign min with arr[i]
            min = arr[i];
        }
    }//increment value of i
    return min;
}
//Creating a function to find max in an array
int max(int arr[],int n){
    int max = INT_MIN;
    //Set a variable with minimum possible num
    for(int i=0;i<n;i++){
        //init a loop starting from 0 and end at n-1
        if(max<arr[i]){
            //if max is < than arr[i]
            //assign max with arr[i]
            max = arr[i];
        }
    }//increment value of i
    return max;
}

int main(){
    int n;//declaring a variable to store input
    //printing label and taking input
    printf("Enter the size of Array1:");
    scanf("%d",&n);
    //declaring the array
    int arr[n];
    //calling input function ,min and max function
    //after passing appropriate parameters
    input(n,arr);
    //printing the output
    printf("Minimum Element: %d \n",min(arr,n));
    printf("Maximum Element: %d",max(arr,n));
    return 0;
    //return 0 after program ends


}
