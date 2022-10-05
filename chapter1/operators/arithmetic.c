/**
 * Test out some integer arithmetic
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for an integer and save it
    int number1 = get_int("Integer: ");

    // Prompt the user for another integer and save it
    int number2 = get_int("Another Integer: ");

    // Addition using an extra variable
    // int add = number1 + number2;
    // printf("%i plus %i is %i\n", number1, number2, add);

    // Printing the value of some arithmetic
    printf("%i plus %i is %i\n", number1, number2, number1 + number2);
    printf("%i minus %i is %i\n", number1, number2, number1 - number2);
    printf("%i times %i is %i\n", number1, number2, number1 * number2);
    // Note* An integer divided by an integer is always an integer
    // Floor division
    printf("%i divided by %i is %i\n", number1, number2, number1 / number2);
    printf("The remainder when %i is divided by %i is %i\n", number1, number2, number1 % number2);
}