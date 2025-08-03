#include "main.h"

/**
 * puts2 - Prints every second character of a string
 * @str: The string to use
 */
void puts2(char *str)
{
    int z = 0;

    while (str[z] != '\0')
    {
        if (z % 2 == 0)
            putchar(str[z]);
        z++;
    }

    putchar('\n');
}

