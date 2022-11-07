// Print each character of a string in reverse

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string from the user
    string s = get_string("Input: ");

    // Loop through each character (strlen() returns the string length)
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        // Print each char as an uppercase letter
        printf("%c", toupper(s[i]));

    }

    printf("\n");
}