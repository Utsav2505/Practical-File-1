//Q14 (b)- Program to delete n chars from a given position in a string.
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h and string.h
#include <stdio.h>
#include <string.h>

void deleteCharacters(char str[], int position, int n) {
    int length = strlen(str);

    if (position < 0 || position >= length || n <= 0) {
        printf("Invalid position or number of characters to delete\n");
        return;
    }

    for (int i = position; i < length - n; i++) {
        str[i] = str[i + n];
    }

    str[length - n] = '\0';
}

int main() {
    char inputString[100];
    int position, n;

    printf("Enter the string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';  // Remove newline character

    printf("Enter the position to start deletion: ");
    scanf("%d", &position);

    printf("Enter the number of characters to delete: ");
    scanf("%d", &n);

    deleteCharacters(inputString, position, n);

    printf("Resulting string after deletion: %s\n", inputString);

    return 0;
}
