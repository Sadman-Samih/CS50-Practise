#include <cs50.h>
#include <stdio.h>

// Prints "Meow!" n times
void meow(int n)
{
    printf("Meow!\n");
}

// get number of meows from user and print that many meows
int main(void)
{
    int n = get_int("How many meows? ");
    for (int i = 0; i < n; i++)
    {
        meow(n);
    }
}
