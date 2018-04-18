#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "HSHPlayer.h"

extern void add( char* name, double scr);
extern void print(FILE *fp=stdout);
extern void store(char *filename);
int NumGames, NumWins=0;
int num1,num2;
int random1();
int random2();


//������ ��� �Լ�

void printgugudan(int dan)   //2�ܺ��� 9�ܱ��� ����ϴ� �Լ�
{
	for ( int i= 2 ; i<10 ; i++)
	{
		printf("             <%d��>\n",i);
		for(dan=1 ; dan<10 ; dan++)
		{
			printf("%2d * %d = %2d  ", i, dan, dan*i);
			if(dan%3==0)  // 3���� �ԷµǸ� ������ ���� ����
				printf("\n");
		}
		printf("\n");
	}}

void resetGame()  //���� �ʱ�ȭ
{
	NumGames =0;
	NumWins=0;
}
//������ ���� �Լ�

void game()
{
	while(true)  //���ѷ���
	{
		int NumGames, NumWins=0;
		int a=1,dan=1, answer, num1,num2;       
		double percent,spg,sumtime=0;
		char begin;              //�ٽ� �����ϱ����� ������ ����
		char name[80];
		

		clock_t start,finish;    //������ ���۽ð��� ������ �ð��� ����ϱ� ���� ������

		double duration;         // �� ������ �ɸ��� �ð� ����� ���ϴ� ���� 
		printf("\t  ����� �̸� �Է� : ");
		scanf("%s",name);
		printf("\n����� �׽�Ʈ �Ͻðڽ��ϱ�??  ");
		scanf("%d",&NumGames);
		fflush(stdin);           //���� ���ֱ�
		printf("%d�� �׽�Ʈ�ϰڽ��ϴ�.\n",NumGames);
		printf("�غ� �ǽø� ���͸� �����ּ���");
		resetGame();  // ���� �ʱ�ȭ
		getchar();
		system("cls");           //ȭ�� �����
		for(a=1;a-1<NumGames;a++)   
		{
			num1=random1();
			num2=random2();

			printf(" [���� %d]:  %d X %d = ",a,num1,num2);
			start=clock();       // ���ӽ��� �ð�
			scanf("%d",&answer);
			finish=clock();		 // ���ӳ����� �ð�
			duration=(double)(finish-start)/CLOCKS_PER_SEC;		 //������ �ɸ��ð� ����ϴ� ����
			sumtime+=duration;
			if(answer==num1*num2)
			{
				NumWins++;
				percent=double (NumWins)/a*100;   //����� ����
				printf("�����Դϴ�!! <���� ����� : %.lf %c >\n",percent,'%');
			}
			else
			{
				percent=double (NumWins)/a*100;
				printf("Ʋ�Ƚ��ϴ�... < ���� ����� : %.lf  %c >\n",percent,'%');
			}
		}


		printf("\n��ü %d �� �߿��� %d ���� ���߼̽��ϴ�.\n",NumGames,NumWins);
		printf("�� ������ ��� %.2lf �ʰ� �ɷȽ��ϴ�.\n\n",double(sumtime)/NumGames);
		spg = double(sumtime)/NumGames;  // ������ ����(�ɸ��ð�)

		if(NumWins==NumGames)  //��繮���� ���߰� ��ŷ�� �����
		{
			printf("��� ������ ���߼������� ��ŷ�� ��ϵ˴ϴ�.\n");
			addRanking(name,spg);  
		}
		printf("====================== [ Ranking ��� ] ======================\n\n");
		printRanking();  // ��ŷ �ܼ�â�� ���
		while(true)
		{
			printf("�ٽ� �Ͻðڽ��ϱ�? Y / N  ");
			fflush(stdin);		  //���� �����
			scanf("%c",&begin);
			if(begin=='n' || begin=='N'){		  // N �Ǵ� n�� ������ ȭ���� ����� ������
				system("cls");    //ȭ�� �����
				storeRanking("rank.txt");
				printf("================������ �����մϴ�================");
				getchar();
				getchar();
				exit(0);
			}
			else if(begin=='y' || begin=='Y')     // Y �Ǵ� y�� ������ ȭ���� ����� ó���� ���ѷ����� ���ư�
			{
				system("cls");
				break;
			}
			else								  // �ٸ����� �Է��ϸ� �ٽ� �Է¹޵�����
			{
				system("cls");
				printf("�ٽ� �Է����ּ���\n\n");

			}
		}

	}
}

inline int random1(void)  //inline �Լ� (ù��°����)
{
	int num1;
	num1=rand()%9+1;
	return num1;
}

inline int random2(void)  //inline �Լ� (�ι�° ����)
{
	int num2;
	num2=rand()%9+1;
	return num2;
}