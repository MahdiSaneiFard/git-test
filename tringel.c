#include <stdio.h>
#include <cs50.h>

int leghte = 5;
int array[5] = {1, 2, 3, 4, 5};

void f(int l);
void sum(int l);
int main(void)
{
    for(int i=1; i<=leghte; i++)
    {
        sum(i);
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
void sum(int l)
{
    int sum;
    for(int u = 0; u < l; u++)
    printf("%d", array[u]);
}
