// Print each character of a string vertically

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string from the user
    string s = get_string("Input: ");

    // Loop through each character (strlen() returns the string length)
    for (int i = 0; i < strlen(s); i++)
    {
        // Print each char as an uppercase letter
        printf("%c\n", toupper(s[i]));

    }
}