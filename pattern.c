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
    bool check_g = check_geometry(numbers);
    if(check_g == true)
    printf("! هندسی است\n");
    bool check_h = check_working(numbers);


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
