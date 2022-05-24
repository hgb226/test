#include "Header.h"

void CountingSort(int A[], int n) {
	int max = A[0];
	for (int i = 0; i < n; i++)
	{
		if (A[i] > max)
			max = A[i];
	}
	int* arr = new int[max]{};
	for (int i = 0; i < max; i++)
	{
		arr[A[i]]++;
	}
	for (int i = 0; i < max; i++)
	{
		if (arr[i] != 0)
		{
			for (int j = 0; j < arr[i]; j++)
				cout << i << endl;
		}
	}
}