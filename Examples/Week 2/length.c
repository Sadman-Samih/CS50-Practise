#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("name: ");
    int length = strlen(name);
    printf("%i\n", length);
}