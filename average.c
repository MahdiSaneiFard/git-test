#include <cs50.h>
#include <stdio.h>
int l = 11;
int sum(int vary,int scores[]);
int main(void)
{
    int score[l];
    for(int i =0;i < l; i++)
    {
        score[i] = get_int("your score :");
    }
    int g = sum(l , score);
    printf("%f", g / (float) l );
}
int sum(int vary,int scores[])
{
    int x=0;
    for(int i = 0; i < l; i++)
    x += scores[i];
    return x;
}
