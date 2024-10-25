#include <stdio.h>
#include <string.h>

typedef struct node
{
    char *Name;
    struct node *Next;
}node;

int main(int countity, char *argev[])
{
    printf("what you want to search here : ");
    char target[10];
    scanf("%s", target);
    int len = strlen(target);

    for(int i = 0; i < countity; i += 1)
    {
        if(strlen(argev[i] == len))
        {
            *Name
        }


    }

}
