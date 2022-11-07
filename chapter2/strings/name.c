// The length of a person's first name

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("Full name: ");

    // Initalize a counter
    int counter = 0;

    // Increase the counter until we see the first space
    while(s[counter] != ' ')
    {
        counter++;
    }

    printf("Length of first name: %i\n", counter);
}