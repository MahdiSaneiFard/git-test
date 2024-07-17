#include <stdio.h>
#include <cs50.h>

int g(int i);
void f(int x);
int cal(int fist_number_cal , int second_number_cal);
void mario(int c);
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

     // calculater fourth part
     int fist_number = get_int("give us your first number:\n");
     int second_number = get_int("give us your second number:\n");
     printf ("%i", cal(fist_number, second_number));
     printf ("\n");

     // mario proj
     int blocks = get_int("how many blocks do you want ? \n");
     mario(blocks);

     // you can do it proj
     int b = get_int("give me one more number ");
     for(int k = b; k>0; k--)
     {
        f(b);
     }

     // contact

     string your_name = get_string("your name please : ");
     int your_number = get_int("your number please : ");
     int your_age = get_int("your age please : ");
     int i = int h;
     do
     {
        g();
     }
     while (your_number < 10000)
     printf("tanke you for your time %s your information seved as order of \n", your_name);
     printf("your number :%i , your age  :%i\n", your_number, your_age);

void f(int x)
{
    for(int o = x; o>0; o--)
    printf("#");
    printf("\n");

}

void mario(int c)
{
    while (c > 0)
    {
    printf("?");
    c--;
    }
    printf("\n");
}
int cal(int fist_number_cal , int second_number_cal)
{
    return fist_number_cal + second_number_cal;
}

int g(int i)
{
     printf("tanke you for your time %s your information seved as order of \n", your_name);
     printf("your number :%i , your age  :%i\n", your_number, your_age);
}
