#include <stdio.h>
#include <cs50.h>

const int vary = 3;

bool check_geometry(int numbers[]);
int main(void)
{
    int numbers[vary];
    for(int c = 0; c < vary; c++)
    {
        printf("your num\n");
        scanf("%i",  &numbers[c]);
    }
    check_geometry(numbers);
    if(check_geometry true)
    printf("g");


}
bool check_geometry(int numbers[])
{
    int l = numbers[1] / numbers[0];
    int g = numbers[2] / numbers[1];
    if(g==l)
    return true;
    else
    return false;
}
