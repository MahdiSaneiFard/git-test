#include <stdio.h>

int main(void)
{
    int num;
    int con = 0;
    printf("num ");
    scanf("%i",&num);
    for(int i = 1; i <= num; i += 2)
    {
        for(int u = num -i; u > 0; u--)
        {
            printf(" ");
        }
        do
        {
            printf("*");
            con++;

        }while(con <= i);

    }

}
