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
        min = a;
        max = b;
    }
    else
    {
        min = b;
        max = a;
    }
    for(int i = mall; i >= 1; i--)
    {
        if(max%i == 0)
        {
            if(min%i == 0)
            {
                printf("%d",i);
                break;
            }
        }

    }
}
