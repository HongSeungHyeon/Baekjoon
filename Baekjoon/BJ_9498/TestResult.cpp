// ���輺��
// ���� ������ �Է¹޾� 90 ~100���� A, 80 ~89���� B,
// 70 ~79���� C, 60 ~69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	if (num >= 90 && num <= 100)
		printf("A");
	else if (num >= 80 && num <= 89)
		printf("B");
	else if (num >= 70 && num <= 79)
		printf("C");
	else if (num >= 60 && num <= 69)
		printf("D");
	else
		printf("F");
	return 0;
}