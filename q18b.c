#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char ch;

    // Input file name
    printf("Enter the name of the file to display: ");
    scanf("%s", filename);

    // Open the file for reading
    file = fopen(filename, "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Display the contents of the file
    printf("\nContents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
