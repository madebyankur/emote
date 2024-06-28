# Natural Language to JavaScript Converter

This application converts natural language input into JavaScript functions and other constructs. It supports creating functions, adding numbers, conditional statements, loops, and variable declarations.

## Features

- Create JavaScript functions
- Add numbers in a function
- Generate conditional statements
- Generate loops
- Declare variables

## Compilation

To compile the application, run the following command:

```sh
gcc -o js_converter main.c command_parser.c js_generator.c
```

## Usage

To run the application, use the following command:

```sh
./js_converter
```

The application will prompt you to enter a natural language command. After entering the command, the generated JavaScript code will be displayed and saved to a file in the `build` folder.

## Example Commands

- `create a function named myFunction`
- `create a function that adds two numbers`
- `if condition`
- `for loop`
- `declare a variable myVariable = myValue`

## Example Session

```sh
$ gcc -o js_converter main.c command_parser.c js_generator.c
$ ./js_converter
Enter a natural language command: create a function named myFunction
Generated JavaScript code:
function myFunction() {
// Your code here
}
```

The generated JavaScript code will also be saved to `build/output.js`.
