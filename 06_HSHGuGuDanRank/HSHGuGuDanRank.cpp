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


//구구단 출력 함수

void printgugudan(int dan)   //2단부터 9단까지 출력하는 함수
{
	for ( int i= 2 ; i<10 ; i++)
	{
		printf("             <%d단>\n",i);
		for(dan=1 ; dan<10 ; dan++)
		{
			printf("%2d * %d = %2d  ", i, dan, dan*i);
			if(dan%3==0)  // 3줄이 입력되면 개행을 위한 조건
				printf("\n");
		}
		printf("\n");
	}}

void resetGame()  //게임 초기화
{
	NumGames =0;
	NumWins=0;
}
//구구단 게임 함수

void game()
{
	while(true)  //무한루프
	{
		int NumGames, NumWins=0;
		int a=1,dan=1, answer, num1,num2;       
		double percent,spg,sumtime=0;
		char begin;              //다시 시작하기위한 문자형 변수
		char name[80];
		

		clock_t start,finish;    //게임의 시작시간과 끝나는 시간을 계산하기 위한 변수들

		double duration;         // 한 문제당 걸리는 시간 평균을 구하는 변수 
		printf("\t  경기자 이름 입력 : ");
		scanf("%s",name);
		printf("\n몇번을 테스트 하시겠습니까??  ");
		scanf("%d",&NumGames);
		fflush(stdin);           //버퍼 없애기
		printf("%d번 테스트하겠습니다.\n",NumGames);
		printf("준비가 되시면 엔터를 눌러주세요");
		resetGame();  // 게임 초기화
		getchar();
		system("cls");           //화면 지우기
		for(a=1;a-1<NumGames;a++)   
		{
			num1=random1();
			num2=random2();

			printf(" [문제 %d]:  %d X %d = ",a,num1,num2);
			start=clock();       // 게임시작 시간
			scanf("%d",&answer);
			finish=clock();		 // 게임끝나는 시간
			duration=(double)(finish-start)/CLOCKS_PER_SEC;		 //문제당 걸린시간 계산하는 변수
			sumtime+=duration;
			if(answer==num1*num2)
			{
				NumWins++;
				percent=double (NumWins)/a*100;   //정답률 계산식
				printf("정답입니다!! <현재 정답률 : %.lf %c >\n",percent,'%');
			}
			else
			{
				percent=double (NumWins)/a*100;
				printf("틀렸습니다... < 현재 정답률 : %.lf  %c >\n",percent,'%');
			}
		}


		printf("\n전체 %d 번 중에서 %d 번을 맞추셨습니다.\n",NumGames,NumWins);
		printf("한 문제에 평균 %.2lf 초가 걸렸습니다.\n\n",double(sumtime)/NumGames);
		spg = double(sumtime)/NumGames;  // 게임의 점수(걸린시간)

		if(NumWins==NumGames)  //모든문제를 맞추고 랭킹에 등록함
		{
			printf("모든 문제를 맞추셨음으로 랭킹에 등록됩니다.\n");
			addRanking(name,spg);  
		}
		printf("====================== [ Ranking 출력 ] ======================\n\n");
		printRanking();  // 랭킹 콘솔창에 출력
		while(true)
		{
			printf("다시 하시겠습니까? Y / N  ");
			fflush(stdin);		  //버퍼 지우기
			scanf("%c",&begin);
			if(begin=='n' || begin=='N'){		  // N 또는 n을 누르면 화면을 지우고 종료함
				system("cls");    //화면 지우기
				storeRanking("rank.txt");
				printf("================게임을 종료합니다================");
				getchar();
				getchar();
				exit(0);
			}
			else if(begin=='y' || begin=='Y')     // Y 또는 y를 누르면 화면을 지우고 처음의 무한루프로 돌아감
			{
				system("cls");
				break;
			}
			else								  // 다른것을 입력하면 다시 입력받도록함
			{
				system("cls");
				printf("다시 입력해주세요\n\n");

			}
		}

	}
}

inline int random1(void)  //inline 함수 (첫번째난수)
{
	int num1;
	num1=rand()%9+1;
	return num1;
}

inline int random2(void)  //inline 함수 (두번째 난수)
{
	int num2;
	num2=rand()%9+1;
	return num2;
}