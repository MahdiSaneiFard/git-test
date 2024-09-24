#include <stdio.h>

int swap_y(int t,int y)
{
    y = t;
    return y;
}

int swap(int x, int y)
{
    int t = x;
    x = y;
    return x;
}

int main(void)
{
    int x;
    printf("x: ");
    scanf("%i", &x);

    int y;
    printf("y: ");
    scanf("%i", &y);

    printf("x: %i & y: %i\n", x, y);

    int t = x;
    swap(x, y);
    swap_y(t, y);

    printf("x: %i & y: %i\n", x, y);

    int h;
    printf("intger: ");
    scanf("%i", &h);
    int *p = &h;
    printf("%p\n", p);
    printf("%p\n", &h);
    printf("%i\n", *p);
    printf("%i\n", h);
    printf("---------\n");
    int *i = p;
    int *ii = i;
    printf("%p\n", i);
    printf("%p\n", ii);
}
