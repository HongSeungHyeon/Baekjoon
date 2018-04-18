#include<stdio.h>

double subtohwa(double num1)  //섭씨를 화씨로 변환함수
{
	return (9.0/5.0)*(num1)+32;
}
double hwatosub(double num2)  //화씨를 섭씨로 변환함수
{
	return (5.0/9.0)*(num2-32);
}
void main()
{
	int num;
	double sub;
loop:

	printf("변환할 종류를 선택해주세요.\n ( 1. C-> F , 2: F->C ) ===>");
	scanf("%d",&num);
	if(num==0)
	{
		printf("프로그램을 종료합니다");
	
	}
	switch(num){  //2개의 조건을 위한 스위치문
	case 1:
	{
		printf("섭씨온도(C)를 입력해주세요 ===>");
		scanf("%lf",&sub);
		printf("섭씨온도 %.2f에 대한 화씨온도는 %.2f입니다.\n\n",sub,subtohwa(sub)); //소숫점 2재짜리까지 나타냄, 섭씨를 화씨로 변환하는 함수 사용
		break;
	}
	case 2:
	{
		printf("화씨온도(F)를 입력해주세요 ===>");
		scanf("%lf",&sub);
		printf("섭씨온도 %.2f에 대한 화씨온도는 %.2f입니다.\n\n",sub,hwatosub(sub));  //소숫점 2재짜리까지 나타냄, 화씨를 섭씨로 변환하는 함수 사용
		break;
	}
	}
	if(num!=0) goto loop;
	getchar();
	getchar();
}