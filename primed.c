#include <stdio.h>

int main(void)
{
for (int i = 5; i>0; i--)
{
    printf("\n");
    i++;
    for (int j=0;j<i;j++)
    i=0;
    {
        printf("#");
    }
}
}
