// ���� N���� �̷���� ���� A�� ���� X�� �־�����. 
// �� ��, A���� X���� ���� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

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