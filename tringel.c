#include <stdio.h>
#include <cs50.h>

int leghte = 5;

void f(int l);
int main(void)
{
    int array[leghte];
    for(int i=1; i<=leghte; i++)
    {
        f(i);
    }
}
void f(int l)
{
    for(int i = 1; i<=l++; i++)
    {
        printf("%d", i);
        l--;
    }
    printf("\n");
    return;
}
