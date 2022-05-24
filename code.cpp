#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;


void BubbleSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (A[j] > A[j + 1])
                swap(A[j], A[j + 1]); 
}
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
}void InsertionSort(int A[], int n)
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

void Merge(int A[], int left, int mid, int right)
{
    int n1 = mid - left + 1; 
    int n2 = right - mid; 

    int* LeftArr = new int[n1];
    int* RightArr = new int[n2];


    for (int i = 0; i < n1; i++)
        LeftArr[i] = A[left + i];
    for (int i = 0; i < n2; i++)
        RightArr[i] = A[mid + 1 + i];

    int i = 0, j = 0, current = left;

    while (i < n1 && j < n2)
        if (LeftArr[i] <= RightArr[j])
            A[current++] = LeftArr[i++];
        else
            A[current++] = RightArr[j++];


    while (i < n1)
        A[current++] = LeftArr[i++];


    while (j < n2)
        A[current++] = RightArr[j++];

    delete[] LeftArr, RightArr;
}

void MergeS(int A[], int left, int right)
{

    if (left < right)
    {
        int mid = left + (right - left) / 2;
        MergeS(A, left, mid);
        MergeS(A, mid + 1, right);
        Merge(A, left, mid, right);
    }
}

void MergeSort(int A[], int n)
{

    MergeS(A, 0, n - 1);
}

int partition(int A[], int low, int high)
{
    int pivot = A[(low+high)/2];
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
int main()
{
    int A[50000];
    int n, c;
    cout << "Nhap so phan tu muon sap xep : "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        A[i] = rand();
    }
    for (int i = 0; i < n; i++)
    {
        cout << " ";
        cout << A[i];
    }
    cout << "\nCac giai thuat : \n1.BubbleSort\n2.SelectionSort\n3.InsertionSort\n4.HeapSort\n5.MergeSort\n6.QuickSort";
    cout << "\nChon giai thuat : "; cin >> c;
    switch (c)
    {
    case 1:
    {
        BubbleSort(A, n);
        for (int i = 0; i < n; i++)
        {
            cout << "\n  ";
            cout << A[i];
        }
        break;
    }
    case 2:
    {
        SelectionSort(A, n);
        for (int i = 0; i < n; i++)
        {
            cout << "\n  ";
            cout << A[i];
        }
        break;
    }
    case 3:
    {
        InsertionSort(A, n);
        for (int i = 0; i < n; i++)
        {
            cout << "\n  ";
            cout << A[i];
        }
        break;
    }
    case 4:
    {
        HeapSort(A, n);
        for (int i = 0; i < n; i++)
        {
            cout << "\n  ";
            cout << A[i];
        }
        break;
    }
    case 5:
    {
        MergeSort(A, n);
        for (int i = 0; i < n; i++)
        {
            cout << "\n  ";
            cout << A[i];
        }
        break;
    }
    case 6:
    {
        QuickSort(A, n);
        for (int i = 0; i < n; i++)
        {
            cout << "\n  ";
            cout << A[i];
        }
        break;
    }
    }
    cout << "test";
}
