//Q14 (a)- Program to insert a substring at a index in mainstring
//by - Utsav(AIDS-B1)

//importing header files, in this case its stdio.h and string.h
#include <stdio.h>
#include <string.h>

// Function to insert a substring into a main string from a given position
void insert(char mainStr[], char subStr[], int position) {
    int sizeMain = strlen(mainStr);
    int sizeSub = strlen(subStr);
    int sizeTotal = sizeMain+sizeSub;
    char result[150];
    int count=0;
    for(int i=0; i<position;i++){
        result[i]=mainStr[i];
        count++;
    }
    int count2 =0;
    for(int i=count+1;i<count+strlen(subStr);i++){
        result[i]=subStr[count2];
        count2++;
    }
    int count3 =0;
    for(int i=position+1;i<sizeTotal;i++){
        result[count+count2+count3+1]=mainStr[i];
        count3++;
    }
    // Display the modified string
    for(int i=0;i<=sizeTotal;i++){
        printf("%c",result[i]);
    }
    

}

int main() {
    char mainStr[100];
    char subStr[50];
    int position;

    // Input main string from the user
    printf("Enter the main string: ");
    fgets(mainStr,sizeof(mainStr),stdin);

    // Input substring from the user
    printf("Enter the substring: ");
    fgets(subStr,sizeof(subStr),stdin);

    // Input position from the user
    printf("Enter the position for insertion: ");
    scanf("%d", &position);

    // Call the function to insert the substring
    insert(mainStr, subStr, position);

    

    return 0;
}
