#include <stdio.h>
#include <math.h>

int A[] = {1, 2, 3 ,5 , A[1]};

int main(void)
{
    int size = sizeof(A)/4;
    for(int i = 1; i < size ; i++)
    {
        int key = A[i];
        int p;
        int y;
        if(key < A[i-1])
        {
            for(int j = i - 1; j >= 0 && key < A[j]; j--)
            {
                A[j + 1] = A[j];
                p = j;
                y = 0;
            }
            if(y == 0)
            {
                A[p] = key;
            }
        }
    }
        for(int il = 0; il < size; il++)
        printf("%i ", A[il]);
        printf("\n");

}
