#include <stdio.h>

int swap_y(t,y)

int swap(int x, int y)
{
    int t = x;
    x = y;
    swap_y(t,y);
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

    swap(x, y);
    swap(x, y);

    printf("x: %i & y: %i", x, y);
}
