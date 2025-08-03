#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print in reverse
 */
void print_rev(char *s)
{
    int z = 0;

    while (s[z] != '\0')
        z--;

    for (z = z - 1; z >= 0; z--)
        putchar(s[z]);

    putchar('\n');
}
