#include <stdio.h>
#include <math.h>

string A[] = {3, 2, 5, 4, 1};

int main(void)
{
    int size = sizeof(A)/4;
    for(int i = 2; i <= size ; i++)
    {
        int key = A[i];
        for(int j = i - 1; j > 0 && A[i] < A[j]; j--)
        A[j + 1] = A[j];

    }
    printf("%i", A);
}
