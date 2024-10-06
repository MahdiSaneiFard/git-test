#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int Number;
    struct node *Next;
} nude;

int main(void)
{
    printf("enter the number :");
    char *group = malloc(4 * sizeof(int));
    scanf("%s", group);
    int *list = NULL;
    for(int i = strlen(group), node *n; i > 0; i++)
    {
        n->number = group[i];
        n->Next = list;
        list = n;

    }

}
