#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void game();  //extern을 이용해 함수 사용할수있게함
extern void printgugudan(int dan=1); //default 매개변수 사용
void main()
{
	int NumGames, NumWins=0;
	int a=1;
	int num1,num2,answer,percent;
	char begin;

	clock_t start,finish;    //게임 시작시간과 끝나는 시간을 나타내는 변수 

	double duration;

	srand(time(NULL));  //랜덤함수가 랜덤한 값을 불러오도록함
	percent=100*NumWins/a;

	printf("구구단 게임에 오신것을 환영합니다!!\n");
	printf("당신의 구구단 실력을 확인하세요!!\n");

	printgugudan();  //구구단 출력함수 호출

	game();   //구구단 게임함수 호출

}
