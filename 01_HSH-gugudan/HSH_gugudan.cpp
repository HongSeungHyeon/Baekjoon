#include<stdio.h>
#include "HSH_gugudan.h"
void printgugudan(int dan);
void main()
{
	//-----------------절차적 프로그래밍-------------
	printf("절차적 프로그래밍 : 구구단\n");
	int dan = 1;
	int i=1;
loop:  //되돌아올곳 지정
	printf(" %2d * %d = %2d ", dan, i, dan*i);
	if(i%3==0)  //3개의 식이 출력된후 한칸띄기를위한 조건
		printf("\n");
	i++;
	if( i<=9) goto loop;  //loop로 돌아가기
	printf("\n\n");
	i=1;
	dan++;
	if (dan<=9) goto loop; //loop로 돌아가기
	
	//---------------구조적 프로그래밍--------------
	printf("구조적 프로그래밍 : 구구단\n");
	printgugudan( 9 );
		
	//---------------객체지향 프로그래밍------------
	
	printf("객체지향 프로그래밍 : 구구단\n");
	gugudan g;
	g.set( 1, 9 );
	g.play(5);
	
	getchar();
	getchar();
}

void printgugudan( int dan)
{
	
	for ( int i= 1 ; i<10 ; i++)
	{
		for(dan=1 ; dan<10 ; dan++)
		{
		printf("%2d * %d = %2d  ", i, dan, dan*i);
		if(dan%3==0)
		printf("\n");
		}
		
		printf("\n\n");
	}}