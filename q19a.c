#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[50], destinationFilename[50];
    char ch;

    // Input source file name
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFilename);

    // Input destination file name
    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFilename);

    // Open the source file for reading
    sourceFile = fopen(sourceFilename, "r");

    // Check if the source file is opened successfully
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open the destination file for writing
    destinationFile = fopen(destinationFilename, "w");

    // Check if the destination file is opened successfully
    if (destinationFile == NULL) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("Contents copied successfully.\n");

    return 0;
}
