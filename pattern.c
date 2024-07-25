#include <stdio.h>

const int vary = 3;

int main(void)
{
    int numbers[vary];
    for(int c = 0; c < vary; c++)
    {
        printf("your num\n");
        scanf("%i", numbers[c]);
    }

}
