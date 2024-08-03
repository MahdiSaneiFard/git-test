#include <cs50.h>
#include <stdio.h>
#include <string.h>

int data[]={1,2,3,4,5,6,7,8,9,10,11};
int r = 0;

bool binary_search(int up,int d,int lp);
int main(void)
{
    int d = (sizeof(data)/4) - 1;
    printf("what you want to search ");
    int user_input;
    scanf("%i", &user_input);
    bool answer = binary_search(user_input,d,d);
    if (answer == 0)
    printf ("found\n");
    else
    printf("not found");

}

bool binary_search(int up,int d,int lp)
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
        d = lp + d/1.9;
        binary_search(up,d,lp);
    }
}
