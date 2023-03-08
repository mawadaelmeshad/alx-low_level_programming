#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts_recursion(char *m)
{
    if(*m == '\0')
    {
	    _putchar('\n');
	    return;
    }
    -putchar(*m);
    _putchar_recursion(m + 1);
}
