//�����̴� �⸻��縦 ���ƴ�.�����̴� ������ �����ؼ� ���� ��������� �ߴ�.�ϴ� �����̴� �ڱ� ���� �߿� �ִ밪�� �����.
//�� ���� M�̶�� �Ѵ�.�׸��� ���� ��� ������ ���� / M * 100���� ���ƴ�.
//���� ���, �������� �ְ����� 70�̰�, ���������� 50�̾����� ���������� 50 / 70 * 100�� �Ǿ� 71.43���� �ȴ�.
//�������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>

int main() {
	int sub_num, max=0;
	double avg =0.0;
	scanf("%d", &sub_num);
	int* arr = new int[sub_num];
	for (int i = 0; i < sub_num; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < sub_num; i++)
		if (arr[i] >= max)
			max = arr[i];
	for (int i = 0; i < sub_num; i++)
		avg += (double)arr[i] / (double)max * 100.0;

	printf("%.2lf", avg/sub_num);


	delete[] arr;
	return 0;
}