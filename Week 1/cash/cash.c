#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int cents;
    do{
        cents = get_int("Changes Owed: ");
        }
    while (cents < 0);

}

int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25
        }
    return quarters;
    }