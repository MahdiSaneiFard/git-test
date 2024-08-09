#include <stdio.h>

int fibonachi(int i);
int main(void)
{
    int user_input;
    printf("how many number do you need \n:");
    scanf("%i", &user_input);
    printf("%i", fibonachi(user_input));
}

int fibonachi(int i)
{
    int n[i];
    n[0] = 0;
    n[1] = 1;
    n[i] = n[i--] + n[i-2];
    return n[i];
}
