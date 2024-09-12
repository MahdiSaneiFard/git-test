#include <stdio.h>

int main(void)
{
    printf("ready\n");
    int s = 1;
    int* p = &s;
    printf("%p\n", &s);
    printf("%d\n", *0x7ff058e01ad);
    }
