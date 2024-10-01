#include <stdio.h>
#include <stdlib.h>

int fibonachi(int i, int *a);
int main2(void);
int main(void)
{
    int user_input;
    printf("how many number do you need \n:");
    scanf("%i", &user_input);
    int a[user_input];
    int *p = malloc(4 * user_input);
    printf("%i\n", fibonachi(user_input,p));
}

int fibonachi(int i, int *a)
{

}

