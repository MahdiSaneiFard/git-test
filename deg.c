#include<stdio.h>

int main(void)
{
    int x[3];
    printf("enter the point : \n");
    for(int i = 0; i < 3; i++)
        scanf("%i", &x[i]);
    if(x[0]>0 && x[1]>0 && x[2]>0)
    printf("in first \n");
    return 0;
}
