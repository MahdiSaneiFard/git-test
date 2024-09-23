#include <stdio.h>

int swap(int x, int y)
{
    x = int tmp;
    x = y;
    y = tmp;
    return x, y;
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
