#include <stdio.h>

int main(void)
{
    int num;
    int con = 0;
    printf("num ");
    scanf("%i",&num);
    for(int i = 1; i <= num; i += 2)
    {
        for(int u = num - i; u > 0; u--)
        {
            printf(" ");
        }
        while(con < i)
        {
            printf("*");
        }
        printf("\n");

    }

}
