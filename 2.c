#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int first_number = get_int("write the first number :\n");
    int secund_number = get_int ("wirte the secound number :\n");

    if (first_number > secund_number)
    {
        ptintf("%d is biger then %d\n", first_number, secund_number);
    }
    else if(first_number < secund_number)
    {
        printf("%d is biger then %d\n",secund_number,first_number);
    }
    else
    printf("you enterd same numbers")
}
