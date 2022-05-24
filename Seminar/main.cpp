#include "Header.h"

int main()
{
    srand(unsigned(time(NULL)));
    int A[50000];
    setArray(A, 50000);
    CountingSort(A, 50000);
    system("pause");
    return 0;
}
