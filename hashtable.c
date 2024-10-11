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
    return 1;
    arr ab[26];
    //array get the values as program data
    for(int k =0; k < 26; k++)
    ab[k].ST=k+1;

    //First considering alphabet
    node *o;
    for(int i = 0; i <= 26; i++)
    {
        o= NULL;
        int l = 1;
        //Loop Without returing
        do{
            //Linked List Creating
            if(i == toupper(name[l][0]) - 'A')
            {
                node *n = malloc(sizeof(node));
                n->Name = name[l];
                n->Next = o;
                o = n;
            }
            l++;
        }while(l < count);
        ab[i].p = o;
    }

    //Printing in interface
    for(int a = 0; a <= 26; a++)
    {
    node *ptr = ab[a].p;
        while (ptr != NULL)
        {
            printf("%c: ", ab[a].ST+64);
            printf("%s ", ptr->Name);
            ptr = ptr->Next;
        }
    }
    printf("\n\n<<<<------------------>>>>\n");
}
