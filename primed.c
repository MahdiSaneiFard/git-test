#include <stdio.h>

int main(void)
{
for (int i = 1; i<5; i++)
{
    printf("\n");
    for (int j=0;j<i;j++)
    {
        printf("#");
        while (i == j)
        {
            printf("\n");
            i += 2;
        }
    }
}
}
