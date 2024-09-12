#include <stdio.h>

int main(void)
{
    printf("ready\n");
    char* d = "a";
    for(int u = 0; u < 10000; u++)
    {
        char* l = (d+u);
        printf("%i", *(d+u));

    }

}


