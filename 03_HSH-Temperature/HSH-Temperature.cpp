#include<stdio.h>

double subtohwa(double num1)  //������ ȭ���� ��ȯ�Լ�
{
	return (9.0/5.0)*(num1)+32;
}
double hwatosub(double num2)  //ȭ���� ������ ��ȯ�Լ�
{
	return (5.0/9.0)*(num2-32);
}
void main()
{
	int num;
	double sub;
loop:

	printf("��ȯ�� ������ �������ּ���.\n ( 1. C-> F , 2: F->C ) ===>");
	scanf("%d",&num);
	if(num==0)
	{
		printf("���α׷��� �����մϴ�");
	
	}
	switch(num){  //2���� ������ ���� ����ġ��
	case 1:
	{
		printf("�����µ�(C)�� �Է����ּ��� ===>");
		scanf("%lf",&sub);
		printf("�����µ� %.2f�� ���� ȭ���µ��� %.2f�Դϴ�.\n\n",sub,subtohwa(sub)); //�Ҽ��� 2��¥������ ��Ÿ��, ������ ȭ���� ��ȯ�ϴ� �Լ� ���
		break;
	}
	case 2:
	{
		printf("ȭ���µ�(F)�� �Է����ּ��� ===>");
		scanf("%lf",&sub);
		printf("�����µ� %.2f�� ���� ȭ���µ��� %.2f�Դϴ�.\n\n",sub,hwatosub(sub));  //�Ҽ��� 2��¥������ ��Ÿ��, ȭ���� ������ ��ȯ�ϴ� �Լ� ���
		break;
	}
	}
	if(num!=0) goto loop;
	getchar();
	getchar();
}