#include "command_parser.h"
#include <string.h>

CommandType parseCommand(const char *input) {
    if (strstr(input, "create a function named") != NULL) {
        return CREATE_FUNCTION;
    } else if (strstr(input, "create a function that adds two numbers") != NULL) {
        return ADD_NUMBERS;
    } else if (strstr(input, "if condition") != NULL) {
        return CONDITIONAL;
    } else if (strstr(input, "for loop") != NULL) {
        return LOOP;
    } else if (strstr(input, "declare a variable") != NULL) {
        return VARIABLE_DECLARATION;
    } else {
        return UNKNOWN;
    }
}