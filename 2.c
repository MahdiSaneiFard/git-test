#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float first_number = get_int("write the first number :\n");
    float secund_number = get_int ("wirte the secound number :\n");

    if (first_number > secund_number)
    {
        printf("%f is biger then %f\n", first_number, secund_number);
    }
    else if(first_number < secund_number)
    {
        printf("%f is biger then %f\n", secund_number, first_number);
    }
    else
    printf("you enterd same numbers\n");
}
