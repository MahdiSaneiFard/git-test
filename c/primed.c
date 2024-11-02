#include <stdio.h>
#include <cs50.h>

void fd(int k);
void f(int l);

int main(void)
{
    int x = get_int("num : ");
    int p = x-1;
    for (int l=1; l<x+1; l++)
    {
        fd(p);
        f(l);
        p--;
    }
}

void f(int l)
{
    for (int i=l; i > 0; i--)
    {
        printf("#");
    }
    printf("\n");
}
void fd(int k)
{
    for(int o = k;0<o;o--)
    printf(" ");
}
