#include <stdio.h>

int main() {
    FILE *file1, *file2, *mergedFile;
    char file1Name[50], file2Name[50], mergedFileName[50];
    char ch;

    // Input the names of the two files to merge
    printf("Enter the name of the first file: ");
    scanf("%s", file1Name);

    printf("Enter the name of the second file: ");
    scanf("%s", file2Name);

    // Input the name of the merged file
    printf("Enter the name of the merged file: ");
    scanf("%s", mergedFileName);

    // Open the first file for reading
    file1 = fopen(file1Name, "r");

    // Check if the first file is opened successfully
    if (file1 == NULL) {
        printf("Error opening the first file.\n");
        return 1;
    }

    // Open the second file for reading
    file2 = fopen(file2Name, "r");

    // Check if the second file is opened successfully
    if (file2 == NULL) {
        printf("Error opening the second file.\n");
        fclose(file1);
        return 1;
    }

    // Open the merged file for writing
    mergedFile = fopen(mergedFileName, "w");

    // Check if the merged file is opened successfully
    if (mergedFile == NULL) {
        printf("Error opening the merged file.\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    // Merge the contents of the two files
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, mergedFile);
    }

    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, mergedFile);
    }

    // Close all files
    fclose(file1);
    fclose(file2);
    fclose(mergedFile);

    printf("Files merged successfully.\n");

    return 0;
}
