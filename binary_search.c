#include <cs50.h>
#include <stdio.h>
#include <string.h>

int data[]={1,3,5,7,9};
int r = 0;

void binary_search(int up);
int main(void)
{
    int d = sizeof(data);
    printf("what you want to search ");
    int user_input;
    scanf("%i", &user_input);
    binary_search(user_input);
}

void binary_search(int up)
{
    if(up<data[4])
        if(data[r]==up)
        {
            printf("found \n");
        }
        else if(data[r] > up)
        {
            r++;
            binary_search(up);
        }
        else if(data[r] < up)
        {
            r++;
            binary_search(up);
        }
        else
        printf("not found");
    else
    printf("not found");
}
