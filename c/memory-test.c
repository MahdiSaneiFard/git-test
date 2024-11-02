#include <stdio.h>

int main(void)
{
    printf("ready\n");
    int d = 1;
    for(int u = 0; u < 1000; u++)
    {
        int l = (d+u);
        printf("%i", (d+u));
    }
    printf("%p\n", &d);

}


