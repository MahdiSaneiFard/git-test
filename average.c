#include <cs50.h>
#include <stdio.h>

float sum(int vary,float scores[]);
int main(void)
{
    int l = get_int("how meny number you have :");
    float score[l];
    for(int i =0;i < l; i++)
    {
        score[i] = get_float("your score :");
    }
    float g = sum(l , score);
    printf("your average is %f\n", g / l );
}
float sum(int vary,float scores[])
{
    float x=0;
    for(int i = 0; i < vary; i++)
    x += scores[i];
    return x;
}
