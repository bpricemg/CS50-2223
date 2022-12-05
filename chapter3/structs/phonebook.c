/**
 * Linear search for a phone number
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    // Create an array called people where each index is of type person
    person people[5];

    // Filling the array
    people[0].name = "Tyler";
    people[0].number = "413-555-5555";

    people[1].name = "Will";
    people[1].number = "800-123-4567";

    people[2].name = "Matt";
    people[2].number = "603-000-9876";

    people[3].name = "John";
    people[3].number = "555-555-5555";

    people[4].name = "Aiden";
    people[4].number = "518-518-5185";

    // Ask the user what to search for
    string name = get_string("Name: ");

    // Search for name
    for (int i = 0; i < 5; i++)
    {
        if (strcasecmp(people[i].name, name) == 0) //Note* capitalization does not matter
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}