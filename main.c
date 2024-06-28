#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include "command_parser.h"
#include "js_generator.h"

void saveToFile(const char *filename, const char *content) {
    FILE *file = fopen(filename, "w");
    if (file != NULL) {
        fputs(content, file);
        fclose(file);
    } else {
        printf("Error: Could not open file for writing.\n");
    }
}

int main() {
    char input[256];
    char output[1024];

    // Ensure the build directory exists
    struct stat st = {0};
    if (stat("build", &st) == -1) {
        mkdir("build", 0700);
    }

    printf("Enter a natural language command: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; // Remove newline character

    CommandType commandType = parseCommand(input);
    generateJSCode(commandType, input, output);

    printf("Generated JavaScript code:\n%s\n", output);

    // Save the output to a file in the build folder
    saveToFile("build/output.js", output);

    return 0;
}