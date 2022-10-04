/**
 * Say hello to a user
 *
 */
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for two number
    float first = get_float("Number: ");
    float second = get_float("Another number: ");

    // Confirm with the user the numbers that they input
    printf("The first number that you chose was %f and "
            "the second number you chose was %0.3f!\n", first, second);
}