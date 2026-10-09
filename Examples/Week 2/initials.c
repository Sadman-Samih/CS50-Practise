#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("Not intended usage\n");
        return 1;
    }
    
    for (int i = 1; i < argc; i++)
    {
        printf("%c", toupper(argv[i][0]));
    }
    printf("\n");
}