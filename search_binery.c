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
    char *ans[len];
    ans[len-1] = NULL;
    for(int k = 0; k < countity; k += 1)
    {

        for(int i=0; i < len; i++)
        {
            if(array[k+1][i] == target[i]){
                ans[i] = array[k+1];

            }

        }

    }
    for(int i=0; i < len; i++)
    {
        if(ans[len-1] != NULL)
        printf("%s",ans[i]);
    }
    if(ans[len-1] == NULL)
    printf("1");


}
