#include <stdio.h>

int swap(int x, int y)
{
    int t = x;
    x = y;
    y = t;
    return x;
    return y;
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
    swap(x, y);
    printf("x: %i & y: %i", x, y);
}
