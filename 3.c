int leghte;
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int score[leghte];
    for (int i = 0 ;i < leghte; i++)
    score[i] = get_int("score :");
    ptintf("%i", sum(leghte) / (float) leghte);
}
int sum(int o)
{
    for(int j =0 ; j < leghte; j++ )
    score[j] += score[j];
}
