#include "Header.h"

int partition(int A[], int low, int high)
{
    int pivot = A[(low + high) / 2];
    while (low < high)
    {
        while (A[low] < pivot)
            low++;
        while (A[high] > pivot)
            high--;
        if (low <= high)
        {
            swap(A[low], A[high]);
            low++;
            high--;
        }
    }
    int m1 = low;
    int m2 = high;
    return m1, m2;
}

void QuickSort(int A[], int n)
{
    partition(A, 0, n - 1);
}