//���л� ��������� 90 % �� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�.����� �׵鿡�� ���� ������ �˷���� �Ѵ�.
//ù° �ٿ��� �׽�Ʈ���̽� C�� �־�����.
//��° �ٺ��� �� �׽�Ʈ���̽� ���� ù ���� ���� N(1 <= N <= 1000)���� �л��� �־����� �� �������� N���� 0���� 100 ������ ������ �̾ �־�����.
//�� ���̽����� ���پ� ����� �Ѵ� �л����� ������ �Ҽ��� ��°�ڸ����� �ݿø��Ͽ� ����Ѵ�.

#include <stdio.h>

int main() {
	int case_num;
	scanf("%d", &case_num);
	double* arr2 = new double[case_num];
	double* arr3 = new double[case_num];
	for (int i = 0; i < case_num; i++)
	{
		int size, sum = 0;
		double cnt = 0.0;
		scanf("%d", &size);
		int* arr = new int[size];
		for (int j = 0; j < size; j++) {
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		arr2[i] = (double)sum / size;
		for (int k = 0; k < size; k++)
			if (arr[k] > arr2[i])
				cnt++;
		arr3[i] = cnt/size*100;
	}

	for (int i = 0; i < case_num; i++)
		printf("%.3lf%%\n", arr3[i]);
	delete[] arr3;
	delete[] arr2;
	return 0;
}