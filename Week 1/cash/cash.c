#include <stdio.h>
#include <cs50.h>

int calculate_quarters(int cents);

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

