#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of single-digit numbers,
 *              separated by ", ", in ascending order, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int number = 0;

    while (number <= 9)
    {
        putchar(number + '0');

        if (number != 9)
        {
            putchar(',');
            putchar(' ');
        }

        number++;
    }

    putchar('\n');

    return (0);
}

