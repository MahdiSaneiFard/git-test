#include <cs50.h>
#include <stdio.h>

int data[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
int r = 0;

int binary_search(int up,int d,int lp);
int main(void)
{
    int d = (sizeof(data)/4) - 1;
    printf("what you want to search ");
    int user_input;
    scanf("%i", &user_input);
    int a = binary_search(user_input,d,d);
    if(a == 0)
    printf("found\n");
    else
    printf("not found \n");

}

int binary_search(int up,int d,int lp)
{
    while (d<16)
    {
        if(data[d/2] == up)
        {
            return 0;
        }
        else if(data[d/2] > up)
        {
            d=d/2;
            binary_search(up,d,lp);
        }
        else if(data[d/2] < up)
        {
            d = lp + d+1/2;
            binary_search(up,d,lp);
        }

    }

}
