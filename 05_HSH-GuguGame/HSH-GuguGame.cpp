#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printgugudan();

void main()
{
	int test, right=0;
	int a=1;
	int dan=1;
	int num1,num2,b,percent;
	int start;
	
	clock_t begin,finish;
	double duration;
	begin=clock();
	finish=clock();
	duration=(double)(finish-begin)/ CLOCKS_PER_SEC;
	srand(time(NULL));
	percent=100*right/a;

	printf("������ ���ӿ� ���Ű��� ȯ���մϴ�!!\n");
	printf("����� ������ �Ƿ��� Ȯ���ϼ���!!\n");

	printgugudan();
	do
	{
	printf("����� �׽�Ʈ �Ͻðڽ��ϱ�??  ");
	scanf("%d",&test);
	printf("%d�� �׽�Ʈ�ϰڽ��ϴ�.\n",test);
	printf("�غ� �ǽø� ���͸� �����ּ���");
	getchar();
	getchar();
	system("cls");
	for(a=1;a-1<test;a++)
	{
		num1=rand()%9+1;
		num2=rand()%9+1;
		printf(" [���� %d]:  %d X %d = ",a,num1,num2);
		scanf("%d",&b);
		if(b==(num1*num2))
		{
			right++;
			percent=100*right/a;
			printf("�����Դϴ�!! <���� ����� : %d >\n",percent);
		}
		else
		{
			percent=100*right/a;
			printf("Ʋ�Ƚ��ϴ�... < ���� ����� : %d >\n",percent);
		}}
		printf("\n��ü %d �� �߿��� %d ���� ���߼̽��ϴ�.\n",test,right);
		printf("�� ������ ��� %.2f �ʰ� �ɷȽ��ϴ�.\n\n",duration);
		printf("�ٽ� �Ͻðڽ��ϱ�? 1=Y / 2=N  ");
		scanf("%d",&start);
			
	
	}while(start==1);

	printf("�����ϼ̽��ϴ�!!");
	getchar();
	getchar();

}
inline void printgugudan()
{
	int dan;
	for ( int i= 1 ; i<10 ; i++)
	{
		printf("             <%d��>\n",i);
		for(dan=1 ; dan<10 ; dan++)
		{
		printf("%2d * %d = %2d  ", i, dan, dan*i);
		if(dan%3==0)
		printf("\n");
		}
		
		printf("\n");
	}}



//����Ʈ ��𿡻��?  , �Լ��ߺ� ��� ��� ?   , time ���??  , �ٽ��Ҷ� y,Y�ߴµ� �ȵʤ�