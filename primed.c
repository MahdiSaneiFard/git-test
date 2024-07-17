#include <stdio.h>

int main(void)
{
for (int i = 5; i>0; i--)
{
    printf("\n");
    i++;
    for (int j=i--;j>0;j--)
    {
        printf("#");
    }
}
}
