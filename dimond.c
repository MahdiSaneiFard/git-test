#include <stdio.h>

int main(void)
{
    int num;
    int con = 0;
    printf("num ");
    scanf("%i",&num);
    for(int i = 1; i <= num; i += 2)
    {
        for(int u = (num-i)/2; u >=0; u--)
        {
            printf(" ");
        }
        for(int k = 1; k < i; k++)
        printf("*");
        {
            printf("*");
        }

        for(int u = (num-i)/2; u >=0; u--)
        {
            printf(" ");
        }
    }
    for(int i = (num-2); i >= 1; i -= 2)
    {
        for(int u = (num-i)/2; u >=0; u--)
        {
            printf(" ");
        }
        for(int k = 1; k < i; k++)
        printf("*");
        {
            printf("*");
        }

        printf("\n");

    }

}
