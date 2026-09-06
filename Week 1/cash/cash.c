#include <stdio.h>
#include <cs50.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);

int main(void)
{
    int cents;
    do{
        cents = get_int("Changes Owed: ");
        }
    while (cents < 0);

    //Calculate the number of quarters to give to customer
    int quarters = calculate_quarters(cents);

    // Subtract quarters from cents
     cents = cents - (quarters * 25);

     printf("Quarters %i\n", quarters);
     printf("Remaining cents %i\n", cents);

    //Calculate the number of dimes to give to customer
    int dimes = calculate_dimes(cents);

    //Subtract dimes from cents
    cents = cents - (dimes * 10);

    printf("Dimes %i\n", dimes);
    printf("Remaining cents %i\n", cents);
}

int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
        }
    return quarters;
    }

int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
        }
    return dimes;
    }

