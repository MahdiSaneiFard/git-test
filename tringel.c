#include <stdio.h>
#include <cs50.h>

int leghte = 5;

void f(int l, int array[]);
int main(void)
{
    int array[leghte];
    for(int i=1; i<=leghte; i++)
    {
        array[leghte]=i;
        f(i, array);
    }
}
void f(int l, int array[])
{
    for(int i = 0; i<l++; i++)
    {
        printf("%d", array[i]);
        printf("\n");
    }
    return;
}
