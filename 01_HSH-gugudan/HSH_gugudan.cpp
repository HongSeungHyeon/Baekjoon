#include<stdio.h>
#include "HSH_gugudan.h"
void printgugudan(int dan);
void main()
{
	//-----------------������ ���α׷���-------------
	printf("������ ���α׷��� : ������\n");
	int dan = 1;
	int i=1;
loop:  //�ǵ��ƿð� ����
	printf(" %2d * %d = %2d ", dan, i, dan*i);
	if(i%3==0)  //3���� ���� ��µ��� ��ĭ��⸦���� ����
		printf("\n");
	i++;
	if( i<=9) goto loop;  //loop�� ���ư���
	printf("\n\n");
	i=1;
	dan++;
	if (dan<=9) goto loop; //loop�� ���ư���
	
	//---------------������ ���α׷���--------------
	printf("������ ���α׷��� : ������\n");
	printgugudan( 9 );
		
	//---------------��ü���� ���α׷���------------
	
	printf("��ü���� ���α׷��� : ������\n");
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