#include <stdio.h>

int main(void)
{
    printf("ready\n");
    int s = 1;
    int* p = &s;
    printf("%p\n", &s);
    printf("%d\n", *(p+5));
    char* d = "a";
    char* l = (d+3);
    printf("%c\n", *(d+3));
}


