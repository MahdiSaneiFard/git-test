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

    printf("x: %i & y: %i", x, y);
}
