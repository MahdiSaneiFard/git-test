#include <cs50.h>
#include <stdio.h>
#include <string.h>

int data[]={1,3,5,7,9};
int r = 0;

void binary_search(int up,int d);
int main(void)
{
    int d = sizeof(data)/4;
    printf("what you want to search ");
    int user_input;
    scanf("%i", &user_input);
    binary_search(user_input,d);
}

void binary_search(int up,int d)
{
    if(data[d/2] == up)
    {
        printf("found \n");
    }
    else if(data[d/2] > up)
    {
        binary_search(up,d/2);
    }
}
