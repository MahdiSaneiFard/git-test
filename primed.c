#include <stdio.h>
#include <cs50.h>

void f(int l,int p);
int main(void)
{
int x = get_int("num : ");
    for (int l=1; l<x+1; l++)
    {
        for (int d=x; d>-1; d--)
        f(l,d);
    }
}
void f(int l,int p)
{
    for (int i=l; i > 0; i--)
    {

        for (int i=p; i > 0; i--)
        {
            printf(" ");
        }
        printf("#");
    }
    printf("\n");
}

