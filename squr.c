#include <stdio.h>

int main(void)
{
    float h;
    printf("your number");
    scanf("%f", &h);
    check(h);
    do
    {
        scanf("%f", &h);
    }
    while(h)

}
bool check(float a)
{
    if(a>0)
    return 0;
    else
    return 1;
}
