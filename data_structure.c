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
    scanf("%s", group);
    node *list = NULL;
    node *n = NULL;
    atoi(group);
    int i = strlen(group)-1;
    for(i ; i >= 0; i--)
    {
        n->Number = group[i];
        n->Next = list;
        list = n;

    }

}
