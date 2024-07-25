#include <stdio.h>
#include <cs50.h>

const int vary = 3;

bool check_working(int numbers[]);
bool check_geometry(int numbers[]);
int main(void)
{
    int numbers[vary];
    for(int c = 0; c < vary; c++)
    {
        printf("your num\n");
        scanf("%i",  &numbers[c]);
        if(numbers[c] )
    }
    bool check_g = check_geometry(numbers);
    if(check_g == true)
    printf("! هندسی است your d is %i \n", numbers[2] / numbers[1]);
    bool check_h = check_working(numbers);
    if(check_g == true)
    printf("! حسابی است your d is %i \n", numbers[2] - numbers[1]);
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

bool check_working(int numbers[])
{
    int l = numbers[1] - numbers[0];
    int g = numbers[2] - numbers[1];
    if(g==l)
    return true;
    else
    return false;
}
