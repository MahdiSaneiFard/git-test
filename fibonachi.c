#include <stdio.h>

int fibonachi(int i);
int main(void)
{
    int user_input;
    printf("how many number do you need \n:");
    scanf("%i", &user_input);
    int a[user_input];
    printf("%i\n", fibonachi(user_input,int *p = &a[user_input - 1];));
}

int fibonachi(int i, int *a)
{
    *a[0] = 1;
    *a[1] = 1;
    *a[i-1] = *a[i-2] + *a[i-3];
    return a[i-1];
}
