#include <stdio.h>
#include <cs50.h>
const int vary = 3;

bool check_working(float numbers[]);
bool check_geometry(float numbers[]);
int check_finn(float numbers[]);
int main(void)
{
    float numbers[vary];
    for(int c = 0; c < vary; c++)
    {
        printf("your num \n");
        scanf("%f",  &numbers[c]);

    }
    bool check_g = check_geometry(numbers);
    if(check_g == true){
        printf("! هندسی است your d is %f \n", numbers[2] / numbers[1]);
    }

    bool check_h = check_working(numbers);
    if (check_h == true){
        printf("! حسابی است your d is %f \n", numbers[2] - numbers[1]);
    }


    if(check_g == false && check_h == false)
    {
        int finn = check_finn(numbers);
        printf("your next num is %i\n", finn);
    }
}

bool check_geometry(float numbers[])
{
    float l = numbers[1] / numbers[0];
    float g = numbers[2] / numbers[1];
    if(g==l){
        return true;
    }

    else{
        return false;
    }
}

bool check_working(float numbers[])
{
    float l = numbers[1] - numbers[0];
    float g = numbers[2] - numbers[1];
    if(g == l)
    return true;
    else
    return false;
}
int check_finn(float numbers[])
{
    int p1 = numbers[1] - numbers[0];
    int p2 = numbers[2] - numbers[1];
    int p3 = numbers[2];
    return p2 - p1 + p2 + p3;
}
