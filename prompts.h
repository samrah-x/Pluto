#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatePrompt ()
{
    // File pointer
    FILE *file;

    // Open the file for reading
    file = fopen("motivation_prompts.txt", "r");

    // Check if the file is opened successfully-NO ITS FINE

    // Read and print each line from the file
    char line[100];  // Adjust the buffer size according to your needs
    int lineNumber = 1;

    // Generate random line number 
    srand(time(NULL));
    int random = (rand() % 10) + 1;

    while (fgets(line, sizeof(line), file) != NULL) {
        if (lineNumber == random) {
            printf("%s\n", line);
            break;  // Exit the loop after printing the line
        }
        lineNumber++;
    }

    // Close the file
    fclose(file);

}