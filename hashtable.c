#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
    //array get the values as program data
    for(int k =0; k < 26; k++)
    ab[k]=k+1;

    for(int i = 1; i < count; i++)
    {
        //check_first_letter
        char f = toupper(name[i][1]);
        int k = atoi(f);

    }
}
