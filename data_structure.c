#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("enter the number :");
    char *group = malloc(4 * sizeof(int)) ;
    scanf("%s", group);
    printf("%s", group);
}
