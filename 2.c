#include <stdio.h>
#include <cs50.h>

int main(void)
{

    //first part
    float first_number = get_float("write the first number :\n");
    float secund_number = get_float("wirte the secound number :\n");

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

    //second part
    char answer = get_char("do you agree?(Y/N) \n");
    if (answer == 'Y' || answer == 'y')
    printf("you are right!\n");
    else if (answer == 'N' || answer == 'n')
    printf("you are roung\n");
    else
    printf("somthing went roung\n");

    // thierd part
    int Woof_counter = get_int("command the dog to wooof how many time :\n");

     while (Woof_counter >= 1)
     {
        printf("woof\n");
        Woof_counter--;
     }




}
