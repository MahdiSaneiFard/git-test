#include <stdio.h>
#include <cs50.h>
const int vary = 3;

int check_working(int numbers[]);
int check_geometry(int numbers[]);
int check_finn(int numbers[]);
int main(void)
{
    int numbers[vary];
    for(int c = 0; c < vary; c++)
    {
        printf("your num (just int)\n");
        scanf("%i",  &numbers[c]);

    }
    bool check_g = check_geometry(numbers);
    if(check_g == true){
        printf("! هندسی است your d is %i \n", numbers[2] / numbers[1]);
    }

    bool check_h = check_working(numbers);
    if (check_g == true){
        printf("! حسابی است your d is %i \n", numbers[2] - numbers[1]);
    }


    else
    {
        int finn = check_finn(numbers);
        printf("your next num is %i\n", finn);
    }
}

int check_geometry(int numbers[])
{
    int l = numbers[1] / numbers[0];
    int g = numbers[2] / numbers[1];
    if(g==l){
        return l;
    }

    if(g!=l){
        return 1;
    }
}

int check_working(int numbers[])
{
    int l = numbers[1] - numbers[0];
    int g = numbers[2] - numbers[1];
    if(g == l)
    return l;
    else
    return false;
}
int check_finn(int numbers[])
{
    int p1 = numbers[1] - numbers[0];
    int p2 = numbers[2] - numbers[1];
    return p2 - p1 + p2 + numbers[2];
}
