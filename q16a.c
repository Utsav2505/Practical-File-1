//Q16 (a)- Program to count num of lines words and chars in a given text.
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h and ctype.h
#include <stdio.h>
#include <ctype.h>

// Function to count lines, words, and characters
void countStats(char text[]) {
    int lines = 0, words = 0, characters = 0;
    int inWord = 0; // Flag to track if currently inside a word

    for (int i = 0; text[i] != '\0'; i++) {
        characters++;

        // Check for newline character to count lines
        if (text[i] == '\n') {
            lines++;
        }

        // Check for whitespace characters to count words
        if (isspace(text[i])) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);
}

int main() {
    char inputText[1000];

    // Input from user
    printf("Enter text (Ctrl+D to end input):\n");
    while (fgets(inputText, sizeof(inputText), stdin) != NULL) {
        // Process the input
    }

    // Count lines, words, and characters
    countStats(inputText);

    return 0;
}
