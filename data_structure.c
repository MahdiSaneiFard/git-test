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
    const char *group = malloc(4 * sizeof(int));
    if (group == NULL)
    return 1;
    scanf("%s", group);
    node *list = NULL;


    for(int i = strlen(group)-1; i >= 0; i--)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
            free(group);
        }
        int NUM = atoi(group[i]);
        n->Number = NUM;
        n->Next = list;
        list = n;
    }
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->Number);
        ptr = ptr->Next;
    }
    printf("\n");

}
