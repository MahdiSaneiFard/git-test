#include <stdio.h>
#include <cs50.h>



int sum(int l,int array[]);
void finn(int g, int l);
int main(void)
{
    int num = get_int("num ");
    int array[num];
    for(int l = 0; l < num; l++)
    {
        array[l] = l+1 ;
    }
    for(int i=1; i<=num; i++)
    {
        int g = sum(i, array);
        finn(g+1,i);

    }
}
int sum(int l,int array[])
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
void space(int i, int num)
{
    for(int l = )
}
