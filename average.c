#include <cs50.h>
#include <stdio.h>
int l = get_int("how meny number you have :");
int sum(int vary,int scores[]);
int main(void)
{
    int score[l];
    for(int i =0;i < l; i++)
    {
        score[i] = get_int("your score :");
    }
    int g = sum(l , score);
    printf("your average is %f\n", g / (float) l );
}
int sum(int vary,int scores[])
{
    int x=0;
    for(int i = 0; i < l; i++)
    x += scores[i];
    return x;
}
