#include <stdio.h>

int main(void)
{
    printf("ready\n");
    char* d = "a";
    for(int u = 0; u < 1000; u++)
    {
        char* l = (d+u);
        printf("%c", *(d+u));
    }
        printf("%p\n", &d);

}


