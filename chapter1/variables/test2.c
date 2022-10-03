/**
 * This program will create variables, assign values, and
 * print them out.
 *
 * Brandon Price
 * CS50 AP
 * Mount Greylock
 */

#include <stdio.h>

int main(void)
{
    // Initalizes the variables x and y
    int x = 42;
    int y = x + 1;

    // Update the values of x and y
    y = 5;
    x = x - 6;

    // Display the values of x and y
    printf("The value of x is %i and the value of y is %i\n", x, y);
}