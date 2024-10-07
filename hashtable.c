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

    for(int i = 1; i <=26 ; i++)
    {
        int a
    }
    for(int i = 1; i <= 26; i++)
    {
        for(int k = 1; k < count; k++)
        {
            //check_first_letter
            if(toupper(name[k][0]) - 'A' = i-1)

        }
        node *n = malloc(sizeof(node));
        n->Name = name[i];
        ab[i].p = n;
    }


}
