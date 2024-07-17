#include <stdio.h>

int main(void)
{
for (int i = 4; i<5; i++)
{
    for (int j=0;j>i--;j++,i--)
    {
        printf("#");
        while (i == j)
        {
            printf("\n");
            j -= i;
        }
    }
}
}
