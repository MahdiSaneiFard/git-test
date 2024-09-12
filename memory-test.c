#include <stdio.h>

int main(void)
{
    printf("ready\n");
    int s = 1;
    int* p = &s;
    printf("%p\n", &s);
    printf("%d\n", *(p+5));
    char* d = "a";
    for(int u = 1, u < 4, u++)
    {
        char* l = (d+u);
        printf("%c\n", *(d+u));

    }

}


