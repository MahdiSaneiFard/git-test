#include <stdio.h>

int main(void)
{
    int a, b ,c;
    printf("nums :");
    scanf("%d %d %d ", &a, &b ,&c);
    char ca ,cb,cc;
    printf("by orther ");
    scanf("%c %c %c ", &ca, &cb ,&cc);
    if(ca == 'A')
    {
        if(cb == 'B')
        printf("%d %d %d",a ,b ,c);
        if(cc == 'B')
        printf("%d %d %d" , a ,c ,b);
    }
    if(ca == 'B')
    {
        if(cb == 'A')
        printf("%d %d %d",b ,a ,c);
        if(cc == 'A')
        printf("%d %d %d" , b ,c ,a);
    }
    if(ca == 'C')
    {
        if(cb == 'B')
        printf("%d %d %d",c ,b ,a);
        if(cc == 'B')
        printf("%d %d %d" , c ,a ,b);
    }


}
