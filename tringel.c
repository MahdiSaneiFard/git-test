#include <stdio.h>
#include <cs50.h>

int leghte = 5;

void f(int l);
int main(void)
{
    for(int i=1; i<=leghte; i++)
    {
        f(leghte);
    }
}
void f(int l)
{
    for(int i = 1; i<l; i++)
    {
        int array[i];
        printf("%d" array[i--] );
    }
}
