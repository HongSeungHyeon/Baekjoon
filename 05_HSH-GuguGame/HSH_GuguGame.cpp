#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void game();  //extern�� �̿��� �Լ� ����Ҽ��ְ���
extern void printgugudan(int dan=1); //default �Ű����� ���
void main()
{
	int NumGames, NumWins=0;
	int a=1;
	int num1,num2,answer,percent;
	char begin;

	clock_t start,finish;    //���� ���۽ð��� ������ �ð��� ��Ÿ���� ���� 

	double duration;

	srand(time(NULL));  //�����Լ��� ������ ���� �ҷ���������
	percent=100*NumWins/a;

	printf("������ ���ӿ� ���Ű��� ȯ���մϴ�!!\n");
	printf("����� ������ �Ƿ��� Ȯ���ϼ���!!\n");

	printgugudan();  //������ ����Լ� ȣ��

	game();   //������ �����Լ� ȣ��

}
