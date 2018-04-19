//대학생 새내기들의 90 % 는 자신이 반에서 평균은 넘는다고 생각한다.당신은 그들에게 슬픈 진실을 알려줘야 한다.
//첫째 줄에는 테스트케이스 C가 주어진다.
//둘째 줄부터 각 테스트케이스 마다 첫 수로 정수 N(1 <= N <= 1000)명의 학생이 주어지고 그 다음으로 N명의 0부터 100 사이의 점수가 이어서 주어진다.
//각 케이스마다 한줄씩 평균을 넘는 학생들의 비율을 소수점 넷째자리에서 반올림하여 출력한다.

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