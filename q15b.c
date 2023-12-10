//Q15 (b)- Program that displays the position or index in the 
//main string S where the sub string T begins, or -1 
//if S doesn't contain T.
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h and string.h
#include <stdio.h>
#include <string.h>

// Function to find the position/index of a substring in a main string
int findSubstring(char mainStr[], char subStr[]) {
    int mainLen = strlen(mainStr);
    int subLen = strlen(subStr);

    for (int i = 0; i <= mainLen - subLen; i++) {
        int j;
        for (j = 0; j < subLen; j++) {
            if (mainStr[i + j] != subStr[j]) {
                break;
            }
        }
        if (j == subLen) {
            return i + 1; // Substring found at position i+1
        }
    }

    return -1; // Substring not found
}

int main() {
    char mainString[100], subString[50];

    // Input from user
    printf("Enter the main string: ");
    gets(mainString);
    printf("Enter the substring to find: ");
    gets(subString);

    // Find substring position
    int position = findSubstring(mainString, subString);

    if (position != -1) {
        printf("Substring found at position: %d\n", position);
    } else {
        printf("Substring not found in the main string.\n");
    }

    return 0;
}
