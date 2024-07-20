#include <cs50.h>
#include <stdio.h>
int score[];
int l = 11;
int main(void)
{
    for(int i =0;i < l; i++)
    {
        score[i] = get_int("your score :");
    }
int g = sum(l , score[]);
printf("%i", g / (float) l )
}
int sum(int vary,int scores[])
{
    int x=0;
    for(int i = 0; i < l; i++)
    x += socres[i]
}
