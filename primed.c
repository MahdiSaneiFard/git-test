#include <stdio.h>
#include <cs50.h>

void f(int l);
int main(void)
{
int x = get_int("num : ");
    for (int l=1; l<x+1; l++)
    {
        f(l);
    }
}
void f(int l)
{
    for (int i=l; i > 0; i--)
    {
        printf(" ");
    }
    for (int i=l; i > 0; i--)
    {
        printf("#");
    }
    printf("\n");
}

