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
    ab[k]->ST = k+1;
    for(int i; i < count; i++)

    for(int i = 1; i < count; i++)
    {
        //check_first_letter
        int f = toupper(name[i][0]) - 'A';
        ab[i]->p = name [i]
    }
}
