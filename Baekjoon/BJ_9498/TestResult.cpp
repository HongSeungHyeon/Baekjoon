// 시험성적
// 시험 점수를 입력받아 90 ~100점은 A, 80 ~89점은 B,
// 70 ~79점은 C, 60 ~69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

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