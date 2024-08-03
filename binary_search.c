#include <cs50.h>
#include <stdio.h>
#include <math.h>

int data[]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
int r = 0;

int binary_search(int up,float d,int lp)
{
    while (d<16)
    {
        int t = round(d/2);
        if(data[t] == up)
        {
            return up;
        }
        else if(data[t] > up)
        {
            d=d/2;
            binary_search(up,d,lp);
        }
        else if(data[t] < up)
        {
            d = lp + d/1.9;
            binary_search(up,d,lp);
        }

    }
    return 1;

}

int main(void)
{
    float d = (sizeof(data)/4) - 1;
    printf("what you want to search ");
    int user_input;
    scanf("%i", &user_input);
    int a = binary_search(user_input,d,d);
    if(a == user_input)
    printf("found\n");
    else
    printf("not found \n");

}


