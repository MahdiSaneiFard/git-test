#include <stdio.h>
#include <cs50.h>

void f(int l,int p);
int main(void)
{
int x = get_int("num : ");
    for (int l=1, int d=x; l<x+1, d>-1; l++,d--)
    {
        f(l,d);
    }
}
void f(int l,int p)
{
    for (int i=p; i > 0; i--)
    {
        printf(" ");
    }
    for (int i=l; i > 0; i--)
    {
        printf("#");
    }
    printf("\n");
}

