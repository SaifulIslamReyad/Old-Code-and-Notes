#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *filePointer;
    // Open file in read mode
    filePointer = fopen("test.txt", "r");
    if (filePointer == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    //reading char by char
    char ch;
    int c=0;
    while ((ch = fgetc(filePointer)) != EOF) {
        printf("%c", ch);
        if (isalpha(ch))
        {
            c++;
        }
    }
    printf("%d",c);
    printf("\n");
    
    //reading line by line
    char line[100];
    filePointer = fopen("test.txt", "r");
    while (fgets(line, 100, filePointer) != NULL) {
        printf("%s", line);
    }
    printf("\n");

    //reading word by word
    char word[50];
    // filePointer = fopen("test.txt", "r");
    fseek(filePointer,0,SEEK_SET);
     while (fscanf(filePointer, "%s", word) != EOF) {
        printf("%s\n", word);
    }

    char word1[50],word2[50];
    filePointer = fopen("test.txt", "r");
     while (fscanf(filePointer, "%s %s", word1,word2) != EOF) {
        printf("%s %s\n", word1,word2);
    }

    

    fclose(filePointer);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



     FILE *filePointer;
    FILE *tempPointer;
    char oldWord[50] = "saiful";
    char newWord[50] = "reyad";
    char word[50];

    // Open the file in read mode
    filePointer = fopen("test.txt", "r");
    tempPointer = fopen("temp.txt", "w");
    

    // Read each word from the file
    while (fscanf(filePointer, "%s", word) != EOF) {
        // If the word matches the old word, replace it with the new word
        if (strcmp(word, oldWord) == 0) {
            fprintf(tempPointer, "%s ", newWord);
        } else {
            fprintf(tempPointer, "%s ", word);
        }
    }

    // Close both files
    fclose(filePointer);
    fclose(tempPointer);

    // Rename the temporary file to the original file
    remove("test.txt");
    rename("temp.txt", "test.txt");

    printf("Word replaced successfully.\n");


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


     FILE *filePointer;
    FILE *tempPointer;
    int oldValue = 12; // Value to be replaced
    int newValue = 13; // New value
    int value;

    // Open the file in read mode
    filePointer = fopen("numbers.txt", "r");
    tempPointer = fopen("temp.txt", "w");
   

    // Read each integer from the file
    while (fscanf(filePointer, "%d", &value) != EOF) {
        // If the integer matches the old value, replace it with the new value
        if (value == oldValue) {
            fprintf(tempPointer, "%d ", newValue);
        } else { 
            fprintf(tempPointer, "%d ", value);
        }
    }

    // Close both files
    fclose(filePointer);
    fclose(tempPointer);

    // Rename the temporary file to the original file
    remove("numbers.txt");
    rename("temp.txt", "numbers.txt");

    printf("Value replaced successfully.\n");


    return 0;
}
