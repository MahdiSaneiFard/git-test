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
    printf("1:%p\n", p);
    printf("2:%p\n", &h);
    printf("3:%i\n", *p);
    printf("4:%i\n", h);
    printf("---------\n");
    int *i = p;
    int *ii = i;
    printf("5:%p\n", i);
    printf("6:%p\n", ii);
}
