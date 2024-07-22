#include <stdio.h>
#include <cs50.h>

int leghte = 6;
int array[6] = {1, 2, 3, 4, 5, 6};

int sum(int l);
void finn(int g, int l);
int main(void)
{
    for(int i=1; i<=leghte; i++)
    {
        int g = sum(i);
        finn(g+1,i);

    }
}
int sum(int l)
{
    int sum = 0;
    for(int u = 0; u < l; u++)
    sum = sum + array[u]-1;
    return sum;
}
void finn(int g, int l)
{
    for(int o = g; o < g+l; o++)
    {
        printf("%i ", o);
    }
    printf("\n");
}
