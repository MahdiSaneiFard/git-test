#include <stdio.h>
#include <cs50.h>

int leghte = 5;
int array[5] = {1, 2, 3, 4, 5};

int sum(int l);
void finn(int g, int l);
int main(void)
{
    for(int i=1; i<=leghte; i++)
    {
        int g = sum(i);
        finn(g,i);

    }
}
int sum(int l)
{
    int sum = 0;
    for(int u = 0; u < l; u++)
    sum = sum + array[u];
    return sum;
}
void finn(int g, int l)
{
    for(int o = g; o++<=g+l; o++)
    {
        printf("%i", g);
    }
    printf("\n");
}
