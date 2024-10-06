#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int Number;
    struct node *Next;
} node;

int main(void)
{
    printf("enter the number :");
    char *group = malloc(4 * sizeof(int));
    if (group == NULL)
    return 1;
    scanf("%s", group);
    node *list = NULL;
    node *n = malloc(sizeof(node));
    if (n == NULL)
    return 1;
    int l = strlen(group)-1;
    int g[] = atoi(group);
    for(int i = l; i >= 0; i--)
    {
        n->Number = g[i];
        n->Next = list;
        list = n;
        printf("%i", (*n).Number);
    }
    printf("\n");

}
