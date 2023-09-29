#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
    /* Base case: If the current character is the null terminator, print a new line and return. */
    if (*s == '\0')
    {
        _putchar('\n'); /* Assuming you have a _putchar function to print a single character. */
        return;
    }

    /* Print the current character and recursively call _puts_recursion with the next character. */
    _putchar(*s);
    _puts_recursion(s + 1);
}

