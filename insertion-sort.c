#include <stdio.h>
#include <math.h>

int A[] = {3, 2};

int main(void)
{
    int size = sizeof(A)/4;
    for(int i = 1; i < size ; i++)
    {
        int key = A[i];
        int p;
        for(int j = i - 1; j >= 0 && A[i] < A[j]; j--)
        {
            A[j + 1] = A[j];
            j = p;
        }
        for(int il = 0; il < size; il++)
        printf("%i", A[il]);
        printf("\n");

        A[p] = key;
        for(int il = 0; il < size; il++)
        printf("%i", A[il]);
        printf("\n");
    }
    for(int il = 0; il < size; il++)
    printf("%i", A[il]);
    printf("\n");
}
