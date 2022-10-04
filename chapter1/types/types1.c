/**
 * Say hello to a user
 *
 */
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for their number
    int n = get_int("Integer: ");

    // Say hello to the user
    printf("Hello, %i!\n", n);
}