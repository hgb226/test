#include "Header.h"
/*khởi tạo giá trị cho mảng*/
void setArray(int A[], int n) {
	for (int i = 0; i < n; i++) {
		A[i] = rand() % 100000 + 0;
	}
}