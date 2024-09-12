#include <stdio.h>

int main(void)
{
    printf("ready\n");
    char *s = "hey";
    int* p = &s;
    printf("%i\n", p);
}
