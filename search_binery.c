#include <stdio.h>
#include <string.h>

int main(int countity, char *argev[])
{
    char *array[countity];
    printf("what you want to search here : ");
    char target[10];
    scanf("%s", target);
    int len = strlen(target);

    for(int i = 0; i < countity; i += 1)
    {
        if(strlen(argev[i]) == len)
        {
            array[i] = argev[i];
        }
    }
    for(int k = 0, char *ans[len]; k < countity; k += 1)
    {
        for(int i=0; i < len; i++)
        {
            if(array[k][i] = target[i]){
                ans[i] = array[k][i];
            }

        }
    }
    

}
