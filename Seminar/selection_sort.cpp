#include "Header.h"

void SelectionSort(int A[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            if (A[j] < A[min])
                min = j;
        if (min != i)
            swap(A[i], A[min]);
    }
}