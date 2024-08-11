#include <stdio.h>
#include <math.h>

int A[] = {3, 2, 5, 4, 1};

int main(void)
{
    int size = sizeof(A)/4;
    for(int i = 1; i < size ; i++)
    {
        int key = A[i];
        int j;
        for(j = i - 1; j >= 0 && A[i] < A[j]; j--)
        A[j + 1] = A[j];
        A[j] = key;
    }
    for(int i = 0; i < size; i++)
    printf("%i", A[i]);
    printf("\n");
}
