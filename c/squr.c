#include <stdio.h>
#include <cs50.h>

bool check(float a);
int main(void)
{
    float h;
    printf("your number");
    scanf("%f", &h);
    bool check_resalt = check(h);
    do
    {
        scanf("%f", &h);
    }
    while(check_resalt == false);
    float p*p = h;
    printf("%f", p);
}
bool check(float a)
{
    if(a>0)
    return 0;
    else
    return 1;
}
