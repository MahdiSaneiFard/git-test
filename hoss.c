#include <stdio.h>

int main()
{
    int sum = 0;
    int l;
    int o;
    printf("how many numbers do you want to know the averge of them ?\n");
    scanf("%d", &l);
    for(int i = 0; i < l; i++)
    {
        printf("enter your number \n");
        scanf("%d", &o);
        sum = o + sum;
    }
    printf("your number is %d", sum/l);
}
