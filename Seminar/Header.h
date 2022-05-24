#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

void setArray(int A[], int n);

void BubbleSort(int A[], int n);

void SelectionSort(int A[], int n);

void InsertionSort(int A[], int n);

void heapify(int A[], int n, int i);
void HeapSort(int A[], int n);

void Merge(int A[], int left, int mid, int right);
void MergeS(int A[], int left, int right);
void MergeSort(int A[], int n);

int partition(int A[], int low, int high);
void QuickSort(int A[], int n);

void CountingSort(int A[], int n);