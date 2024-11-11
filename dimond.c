#include <stdio.h>

int main(void)
{
    int num;
    printf("num ");
    scanf("%i",&num);
    for(int i = 1; i <= num; i++)
    {
        for(int k = 1; k <= i; k++)
        {
            printf("%i", k);
        }
        printf("\n");
    }

}
