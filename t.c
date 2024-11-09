#include <stdio.h>

int main(void)
{
    int a, b ,c;
    printf("nums :");
    scanf("%d %d %d ", &a, &b ,&c);
    printf("by orther");
    char ca , cb, cc;
    scanf("%c %c %c", &ca, &cb ,&cc);
    if(ca == 'A')
    {
        if(cb == 'B')
        printf("%d %d %d\n",a ,b ,c);
        if(cc == 'B')
        printf("%d %d %d\n" , a ,c ,b);
    }
    if(ca == 'B')
    {
        if(cb == 'A')
        printf("%d %d %d\n",b ,a ,c);
        if(cc == 'A')
        printf("%d %d %d\n" , b ,c ,a);
    }
    if(ca == 'C')
    {
        if(cb == 'B')
        printf("%d %d %d\n",c ,b ,a);
        if(cc == 'B')
        printf("%d %d %d\n" , c ,a ,b);
    }


}
