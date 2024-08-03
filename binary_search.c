#include <cs50.h>
#include <stdio.h>
#include <math.h>

int data[]={1, 3, 5, 7, 9, 11};
int r = 0;

int binary_search(int up,int d,int lp)
{
    while (r <=lp/2 +1)
    {
        if(up<)

        if(data[d/2] == up)
        {
            return 0;
        }
        else if(data[d/2] > up)
        {
            r++;
            d=;
            binary_search(up,d,lp);
        }
        else if(data[d/2]< up)
        {
            r++;
            d=((d/2) + lp+1);
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
    if(user_input<=data[d/2])
    {
        int a = binary_search_left(user_input,d,d);
        if(a == 0)
        printf("found\n");
        else
        printf("not found \n");
        return 0;
    }

}


