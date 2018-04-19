// 세 정수 A, B, C가 주어진다. 
// 이 때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main() {
	int n1, n2, n3;
	scanf("%d%d%d", &n1, &n2, &n3);

	if (n1 >= n2) {
		if (n2 >= n3)
			printf("%d", n2);
		else if(n1>=n3)
			printf("%d", n3);
		else
			printf("%d", n1);
	}
	else if (n1 <= n2) {
		if (n2 <= n3)
			printf("%d", n2);
		else if (n1 >= n3)
			printf("%d", n1);
		else
			printf("%d", n3);
	}

	return 0;
}