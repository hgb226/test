#include "Header.h"

void InsertionSort(int A[], int n)
{
    int pos, x;
    for (int i = 1; i < n; i++)
    {
        x = A[i];
        pos = i - 1;
        while (pos >= 0 && A[pos] > x)
        {

            A[pos + 1] = A[pos];
            pos--;
        }
        A[pos + 1] = x;
    }
}