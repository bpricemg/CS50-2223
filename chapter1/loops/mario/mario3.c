// Blocks stacked
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get a height from the user
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0);

    // For the height
    for (int i = 0; i < height; i++)
    {
        // Print a block
        printf("#\n");
    }
}