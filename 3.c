#include <cs50.h>
#include <stdio.h>

int leghte = 3;

int sum(int j,int score[]);
int main(void)
{
    int score[leghte];
    for (int i = 0 ;i < leghte; i++)
    {
        score[i] = get_int("score :");
    }
    printf("%f", sum(leghte, score) / (float) leghte);
}
int sum(int j,int score[])
{
    int a = 0;
    for(j =0 ; j < leghte--; j++ )
    a = a + score[j];
    return a;
}
