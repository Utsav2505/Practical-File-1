//Q12 (d)- Program to count duplicates in an array
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
//Crating a function to count duplicates present in an array
int duplicates(int arr[],int n){
    int count =0;
    //init a variable count with 0
    //init a loop that will run from 0 to n-1
    for(int i=0;i<n;i++){
        //init a loop that will run from 0 to n-1
        for(int j=0;j<n;j++){
            //if i is not = to j and 
            //the value at arr[i] = arr[j]
            if(i!=j && arr[i]==arr[j]){
                count++;
                //increment count by 1
                break;
                //break from inner loop
                //to prevent count same element more by 1
            }
        }//increment j by 1
    }//increment i by 1
    return count;
    //return the value of count
}

int main(){
    int n;//declaring a variable to store input
    //printing label and taking input
    printf("Enter the size of Array1:");
    scanf("%d",&n);
    //declaring the array
    int arr[n];
    //calling input function and duplicate function
    //after passing appropriate parameters
    input(n,arr);
    //printing the output
    printf("The Array you entered has %d duplicate elements.",duplicates(arr,n));
    return 0;
    //return 0 after program ends


}