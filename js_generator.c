#include "js_generator.h"
#include <stdio.h>
#include <string.h>

void generateJSCode(CommandType commandType, const char *input, char *output) {
    switch (commandType) {
        case CREATE_FUNCTION: {
            char functionName[50];
            sscanf(input, "create a function named %s", functionName);
            sprintf(output, "function %s() {\n    // Your code here\n}\n", functionName);
            break;
        }
        case ADD_NUMBERS:
            sprintf(output, "function add(a, b) {\n    return a + b;\n}\n");
            break;
        case CONDITIONAL:
            sprintf(output, "if (condition) {\n    // Your code here\n} else {\n    // Your code here\n}\n");
            break;
        case LOOP:
            sprintf(output, "for (let i = 0; i < n; i++) {\n    // Your code here\n}\n");
            break;
        case VARIABLE_DECLARATION: {
            char varName[50], varValue[50];
            if (sscanf(input, "declare a variable %s = %s", varName, varValue) == 2) {
                sprintf(output, "let %s = %s;\n", varName, varValue);
            } else if (sscanf(input, "declare a variable %s", varName) == 1) {
                sprintf(output, "let %s;\n", varName);
            } else {
                sprintf(output, "// Could not understand the variable declaration\n");
            }
            break;
        }
        case UNKNOWN:
        default:
            sprintf(output, "// Could not understand the input\n");
            break;
    }
}