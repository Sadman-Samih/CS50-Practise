#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int n;

    while (true)
    {
        nt n = get_int("How many meows? ");
        if (n < 0)
        {
            printf("Please enter a non-negative number.\n");
            continue;
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("Meow!\n");
    }
}

/*
do
    {
        n = get_int("How many times do you want to hear meow? ");
    }
    while (n < 0);
    */
