// Cipher a message with 5 charcaters with "wrapping"

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    string message = "Voila!";
    // De-cipher the message
    printf("The cipher message is: ");

    // For each character in the message
    for (int i = 0; i < strlen(message); i++)
    {
        // Go 5 ASCII characters with "wrapping" (only works for upper case)
        printf("%c", (message[i] + 5 - 'A') % 26 + 'A');
    }

    // New line
    printf("\n");

    // Return success
    return 0;
}