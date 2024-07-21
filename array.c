#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = get_string("your name :");
    int x = strlen(name);
    for(int i = 0; i <= x; i++)
    {
        if(i != x)
        printf("%i\n", name[i]);
        else
        printf("nul\n");
    }
}
