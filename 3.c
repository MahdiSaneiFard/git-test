#include <cs50.h>
#include <stdio.h>

int leghte = 3;

int sum(int j);
int main(void)
{
    int score[leghte];
    for (int i = 0 ;i < leghte; i++)
    {
        score[i] = get_int("score :");
    }
    printf("%f", sum(leghte) / (float) leghte);
}
int sum(int j)
{
    for(j =0 ; j < leghte--; j++ )
    return score[j++] = score[j++] + score[j];
}
