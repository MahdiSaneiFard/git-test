#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[])
{
    int arrey[3];
    arrey[0] = 1;
    arrey[1] = 2;
    arrey[2] = 3;

    for(int i = 0; i < 3; i += 1)
    {
        printf("%i is your number /// ", arrey[i]);
    }
    printf("\n");
    int *p = malloc(4 * sizeof(int));
    if (p == NULL)
    {
        return 1;
    }
    for(int n = 0; n < 3; n++)
    {
        p[n] = arrey[n];
    }
    p[3] = 4;


    for(int i = 0; i < 4; i += 1)
    {
        printf("%i is your number /// ", p[i]);
    }
    printf("\n");
    free(p);


}
