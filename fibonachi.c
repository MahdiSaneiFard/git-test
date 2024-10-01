#include <stdio.h>
#include <stdlib.h>

int fibonachi(int i, int *a);
int main2(void);
int main(void)
{
    int user_input;
    printf("how many number do you need \n:");
    scanf("%i", &user_input);
    int a[user_input];
    int *p = malloc(4 * user_input);
    printf("%i\n", fibonachi(user_input,p));
    int main2(void);
}

int fibonachi(int i, int *a)
{
    *(a) = 1;
    *(a+4) = 1;
    *(a+(i*4)-4) = *(a+(i*4)-8)+ *(a+(i*4)-12);
    i--;
    return *(a+(i*4)-4);
}

int main2(void)
{
    int l = 8;
    int y[l];
    y[0]=1;
    y[1]=1;
    y[l-1] = y[l-2] + y[l-3];
    return y[l-1];
}
