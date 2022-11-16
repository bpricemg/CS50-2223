/**
 * Say hello to a user if, and only if, the user provides their first name
*/

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Check to see if the requirements have been met
    // Essentially ensure "./exit <first name>"
    if (argc != 2)
    {
       // Print a usage error
       printf("Usage: ./exit <first name>\n");

       // Return an int for main, program stops running
       return 1;
    }

    // Say hello
    printf("hello, %s\n", argv[1]);

    // Return a success for main
    return 0;
}