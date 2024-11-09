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
    //mortab mikone
    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
        if(a > c)
        {
            temp = a;
            a = c;
            c = temp;
        }
        if(b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }

    }
    if(b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    //printing the vailous
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
