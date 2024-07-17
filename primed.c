#include <stdio.h>
#include <cs50.h>

void fd(int l);
void f(int l);
int main(void)
{
    int p=0;
    int x = get_int("num : ");
    for (int l=1; l<x+1; l++)
    {
        fd(p);
        f(l);
        p++;
    }

}
void f(int l)
{
    for (int i=l; i > 0; i--)
    {
        printf("#");
    }
    printf("\n");
}
void fd(int k)
{
    for(int k =0)
    printf(" a ");
}
