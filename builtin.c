#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main() {
    char buffer[BUFFER_SIZE];

    while (1) {
        // Print the prompt
        printf("$ ");
        fflush(stdout);

        // Read a command from the user
        if (fgets(buffer, BUFFER_SIZE, stdin) == NULL) {
            break;
        }

        // Remove the trailing newline
        buffer[strcspn(buffer, "\n")] = 0;

        // Check for the exit command
        if (strcmp(buffer, "exit") == 0) {
            break;
        }

        // Otherwise, try to execute the command
        if (system(buffer) != 0) {
            // Print an error message if the command failed
            perror("Command failed");
        }
    }

    return 0;
}

