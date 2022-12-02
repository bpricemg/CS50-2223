/**
 * Linear search for a string element in an array
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // An array of numbers
    string names[] = {"Tyler", "Will", "Matt", "John", "Aiden"};

    // Search for "Foster"
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(names[i], "Foster") == 0)
        {
            printf("Found at index %i\n", i);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}