#include <stdio.h>
#include <stdlib.h>

// Function to get the size of a file
long getFileSize(FILE *file) {
    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    fseek(file, 0, SEEK_SET);
    return size;
}

// Function to reverse the first n characters in a file
void reverseFirstNCharacters(FILE *file, int n) {
    long size = getFileSize(file);

    // Read the content of the file
    char *content = (char *)malloc(size);
    fread(content, 1, size, file);

    // Reverse the first n characters
    for (int i = 0; i < n / 2; i++) {
        char temp = content[i];
        content[i] = content[n - i - 1];
        content[n - i - 1] = temp;
    }

    // Write the reversed content back to the file
    fseek(file, 0, SEEK_SET);
    fwrite(content, 1, n, file);

    // Free the allocated memory
    free(content);
}

int main() {
    FILE *file;
    char filename[50];
    int n;

    // Input the file name
    printf("Enter the name of the file: ");
    scanf("%s", filename);

    // Open the file for reading and writing
    file = fopen(filename, "r+");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Reverse the first n characters in the file
    reverseFirstNCharacters(file, n);

    // Close the file
    fclose(file);

    printf("First %d characters reversed successfully.\n", n);

    return 0;
}
