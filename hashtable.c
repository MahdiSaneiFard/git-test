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
    //array get the values
    for(int k =0; k < 26; k++)
    ab[k]=k+1;

    for(int i = 1; i < count; i++)
    {
        //check_first_letter
        int f = atoi(toupper(name[i][1]));

    }
}
