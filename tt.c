#include <stdio.h>

int main(void)
{
    int a, b ,c;
    printf("nums :");
    scanf("%d %d %d ", &a, &b ,&c);
    printf("by orther :");
    char ca , cb, cc;
    scanf("%c %c %c", &ca, &cb ,&cc);
    int temp;
    if(a > b)
    {
        temp = a;
        a =b;
        b =temp;
    }
    if(c<b)
    {
        if(c<a)
        {
            temp = a;
            a =c;
            c=temp;
            temp =c;
            c = b;
            b =temp;
        }
    }
    printf("%d %d %d \\\\", a,b,c);
    int A = a;
    int B = b;
    int C = c;
    if(ca == 'A')
    {
        if(cb == 'B')
        printf("%d %d %d\n",A ,B ,C);
        if(cc == 'B')
        printf("%d %d %d\n" , A ,C ,B);
    }
    if(ca == 'B')
    {
        if(cb == 'A')
        printf("%d %d %d\n",B ,A ,C);
        if(cc == 'A')
        printf("%d %d %d\n" , B ,C ,A);
    }
    if(ca == 'C')
    {
        if(cb == 'B')
        printf("%d %d %d\n",C ,B ,A);
        if(cc == 'B')
        printf("%d %d %d\n" , C,A ,B);
    }

}
