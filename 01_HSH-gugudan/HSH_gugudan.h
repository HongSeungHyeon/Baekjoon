#pragma once
#include<stdio.h>
class gugudan   //Ŭ����
{
	int		from;
	int		to;
public:
	gugudan(void){ from:1; to=9;}    //������
	~gugudan(void){}   //�Ҹ���
	void set(int f, int t) {
		from = f;
		to = t;
	}
	void play (int gugu)
	{
		for( int a=from ; a <= to; a++)
		{
			for(gugu=1;gugu<10;gugu++){
			printf("%2d * %d = %2d  ", a,gugu, gugu*a);
			if(gugu%3==0)
		printf("\n");
		}
			printf("\n\n");
	}
		}};