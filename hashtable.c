#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//array
typedef struct arr
{
    int ST;
    struct node *p;
}arr;

//node
typedef struct node
{
    char *Name;
    struct node *Next;
}node;

int main(int count ,char *name[])
{
    arr ab[26];

    //array get the values as program data
    for(int k =0; k < 26; k++)
    ab[k].ST=k+1;

    for(int i = 0; i <= 2; i++)
    {
        node *o[i];
        o[i]= NULL;

        int l = 1;
        do{

            if(i == toupper(name[l][0]) - 'A')
            {
                node *n = malloc(sizeof(node));
                n->Name = name[l];
                n->Next = o[i];
                o[i] = n;
            }

            l++;
        }while(l < count);
        ab[i].p = o[i];
    }
    node *ptr =
    while (ptr != NULL)
    {
        
    }
    printf("\n\n");


}
