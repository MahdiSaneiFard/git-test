#include <stdio.h>

void print(int a);
int main(void)
{
    int a;
    scanf("%d", &a);
    print(a);

}
void print(int a)
{
    for(int i=1 ; a>=i ; i++ )
    printf("hello, world!");
}
