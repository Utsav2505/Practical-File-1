//Q16 (b)- Program tofind the length of string using pointer
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h
#include <stdio.h>

// Function to find the length of a string using a pointer
int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char inputString[100];

    // Input from user
    printf("Enter a string: ");
    gets(inputString);

    // Find the length of the string using a pointer
    int length = stringLength(inputString);
    printf("Length of the string: %d\n", length);

    return 0;
}
