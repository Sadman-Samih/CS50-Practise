#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int scores[5] = {120, 25 ,67, 87 ,89};

    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", scores[i]);
    }
}