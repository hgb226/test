#include "Header.h"

void heapify(int A[], int n, int i)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;

    if (left < n && A[left] < A[largest])
        largest = left;
    if (right < n && A[left] < A[largest])
        largest = right;

    if (largest != i)
    {
        swap(A[i], A[largest]);
        heapify(A, n, largest);
    }
}

void HeapSort(int A[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(A, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        swap(A[i], A[0]);
        heapify(A, i, 0);
    }
}