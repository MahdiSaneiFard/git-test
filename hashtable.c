#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//node
typedef struct node
{
    char *Name;
    struct node *Next;
}node;

int main(int count ,char *name[])
{
    for(int i = 0; i < count; i++)
    {
        printf("%s", name[i]);
    }
}
