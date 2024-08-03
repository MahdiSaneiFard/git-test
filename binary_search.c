#include <cs50.h>
#include <stdio.h>
#include <math.h>

int data[]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
int r = 0;

int binary_search(int up,int d,int lp)
{
    while (r <=d/2)
    {
        d=d/2;
        if(data[d] == up)
        {
            return 0;
        }
        else if(data[d]> up)
        {
            r++;
            binary_search(up,d,lp);
        }
        else if(data[d+d/2]< up)
        {
            r++;
            d=(d+1+lp)/2;
            binary_search(up,d,lp);
        }

    }
    return 1;

}

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


