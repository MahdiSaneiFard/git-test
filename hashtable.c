#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//array
int ab[26];

//node
typedef struct node
{
    char *Name;
    struct node *Next;
}node;

int main(int count ,char *name[])
{
    for(int i = 1; i < count; i++)
    {
        //check_first_letter
        int f = toupper(name[i][1]);
        
    }
}
