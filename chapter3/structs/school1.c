/**
 * Use a data structure to hold student names and
 * GPAs. Print out the information.
*/

#include <cs50.h>
#include <stdio.h>
#include "student.h" //Quotes for header files in the local director

int main(void)
{
    // Get the number of students from user
    int enrollment = get_int("Enrollment: ");
    printf("\n");

    // Allocate space for the students
    student school[enrollment];

    // Prompt for students' names and gpa
    for (int i = 0; i < enrollment; i++)
    {
        printf("Student #%i\n", i + 1);
        school[i].name = get_string("Name: ");
        school[i].gpa = get_float("gpa: ");
        printf("\n");
    }

    // Print all students' name and gpa
    for (int i = 0; i < enrollment; i++)
    {
        printf("%s has a gpa of %0.3f\n", school[i].name, school[i].gpa);
    }
}