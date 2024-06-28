#ifndef COMMAND_PARSER_H
#define COMMAND_PARSER_H

typedef enum {
    CREATE_FUNCTION,
    ADD_NUMBERS,
    CONDITIONAL,
    LOOP,
    VARIABLE_DECLARATION,
    UNKNOWN
} CommandType;

CommandType parseCommand(const char *input);

#endif // COMMAND_PARSER_H