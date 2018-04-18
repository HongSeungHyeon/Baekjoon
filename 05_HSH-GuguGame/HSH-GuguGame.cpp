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

	printf("구구단 게임에 오신것을 환영합니다!!\n");
	printf("당신의 구구단 실력을 확인하세요!!\n");

	printgugudan();
	do
	{
	printf("몇번을 테스트 하시겠습니까??  ");
	scanf("%d",&test);
	printf("%d번 테스트하겠습니다.\n",test);
	printf("준비가 되시면 엔터를 눌러주세요");
	getchar();
	getchar();
	system("cls");
	for(a=1;a-1<test;a++)
	{
		num1=rand()%9+1;
		num2=rand()%9+1;
		printf(" [문제 %d]:  %d X %d = ",a,num1,num2);
		scanf("%d",&b);
		if(b==(num1*num2))
		{
			right++;
			percent=100*right/a;
			printf("정답입니다!! <현재 정답률 : %d >\n",percent);
		}
		else
		{
			percent=100*right/a;
			printf("틀렸습니다... < 현재 정답률 : %d >\n",percent);
		}}
		printf("\n전체 %d 번 중에서 %d 번을 맞추셨습니다.\n",test,right);
		printf("한 문제에 평균 %.2f 초가 걸렸습니다.\n\n",duration);
		printf("다시 하시겠습니까? 1=Y / 2=N  ");
		scanf("%d",&start);
			
	
	}while(start==1);

	printf("수고하셨습니다!!");
	getchar();
	getchar();

}
inline void printgugudan()
{
	int dan;
	for ( int i= 1 ; i<10 ; i++)
	{
		printf("             <%d단>\n",i);
		for(dan=1 ; dan<10 ; dan++)
		{
		printf("%2d * %d = %2d  ", i, dan, dan*i);
		if(dan%3==0)
		printf("\n");
		}
		
		printf("\n");
	}}



//디폴트 어디에사용?  , 함수중복 어디에 사용 ?   , time 어떻게??  , 다시할때 y,Y했는데 안됨ㅠ