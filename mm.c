#include <stdio.h>

;
int main(void)
{
    int a;
    scanf("%d", &a);
    for(int i= 1; a%i==0 ;i++ )
    {
        printf("%d\n", i);
    }
}
