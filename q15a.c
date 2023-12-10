//Q15 (a)- Program using user defined functions 
//to determine whether the given string is palindrome or not.
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h and string.h
#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }

    return 1; // Palindrome
}

int main() {
    char inputString[100];

    // Input from user
    printf("Enter a string: ");
    gets(inputString);

    // Check if palindrome
    if (isPalindrome(inputString)) {
        printf("%s is a palindrome.\n", inputString);
    } else {
        printf("%s is not a palindrome.\n", inputString);
    }

    return 0;
}
