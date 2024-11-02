#include <stdio.h>
#include <stdlib.h>

int fibonachi(int i);
int main(void)
{
    int user_input;
    printf("how many number do you need \n:");
    scanf("%i", &user_input);
    int al[user_input];
    int *p = malloc(4 * user_input);
    printf("%i\n", fibonachi(user_input));
}

int fibonachi(int i)
{
    a[0] = 1;
    a[1] = 1;
    a[i-1] = a[i-2] + a[i-3];
    return a[i-1];
}
        //check_first_letter
        int f = toupper(name[i][0]) - 'A';
