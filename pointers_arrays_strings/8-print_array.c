#include <main.h>

/**
 * puts_half - Prints the second half of a string
 * @str: The string to use
 */
void puts_half(char *str)
{
    int len = 0, i;

    while (str[len] != '\0')
        len++;

    if (len % 2 == 0)
        i = len / 2;
    else
        i = (len - 1) / 2 + 1;

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }

    putchar('\n');
}
