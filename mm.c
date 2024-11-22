#include <stdio.h>

;
int main(void)
{
    int b;
    int max;
    int mall;
    int a;
    scanf("%d%d", &a,&b);
    if(a < b)
    {
        mall= a;
        max = b;
    }
    else
    {
        mall = b;
        max = a;
    }
    for(int i = mall; i >= 1; i--)
    {
        if(max%i == 0)
        {
            if(mall%i == 0)
            {
                printf("%d",i);
                break;
            }
        }

    }
}
