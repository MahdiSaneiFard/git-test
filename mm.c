#include <stdio.h>

;
int main(void)
{
    int b;
    int max;
    int mall;
    int a;

    do
    {
        scanf("%d%d", &a,&b);
    }while(a<0||b<0);
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
    for(int i = min; i >= 1; i--)
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
