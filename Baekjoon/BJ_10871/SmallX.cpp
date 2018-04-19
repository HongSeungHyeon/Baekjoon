// 정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 
// 이 때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main() {
	int num, x;
	scanf("%d %d", &num, &x);
	int* arr = new int[num];

	for (int i = 0; i < num; i++) 
		scanf("%d", &arr[i]);
	for (int i = 0; i < num; i++)
	{
		if (arr[i] < x)
			printf("%d ", arr[i]);
	}

	delete[] arr;
	return 0;
}