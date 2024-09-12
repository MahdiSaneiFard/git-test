#include <stdio.h>

int main(void)
{
    printf("ready\n");
    char *s = "hey";
    printf("c\n", &s);
}
