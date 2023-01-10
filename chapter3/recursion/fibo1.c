/**
 * Recursive implementation that lists the first 25 Fibonacci numbers
*/

#include <cs50.h>
#include <stdio.h>

#define N 25

// Function prototype
int fibo(int n);

int main(void)
{
    // Print the first numbers in the Fibonacci series
    printf("The first %i numbers in the Fibonacci series are: \n", N);
    for (int i = 0; i < N; i++)
    {
        printf("%i ", fibo(i));
    }
    printf("\n");
}

/**
 * Return the nth Fibonacci number, recursively
*/
int fibo(int n)
{
    // Base case
    if (n <= 1)
        return n;

    // Recursive case
    else
        return fibo(n - 1) + fibo(n - 2);
}