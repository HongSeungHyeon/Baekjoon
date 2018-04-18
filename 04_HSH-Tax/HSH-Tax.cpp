#include<stdio.h>
void main()
{
	double don=0;
	double income=0;
	double tax=0;
	printf("소득을 입력해 주세요(댠위 : 만원) ===>  ");
	scanf("%lf원",&don);
	

	if(don<1200){
		tax=don*(0.06);  //세금 계산
		income=don-tax;  // 세후소득 계산
		printf("세금은 %.2f원 이고 세후 소득은 %.2f원 입니다.",tax,income);   // 소숫점 둘째자리까지 나타냄
	}
	else if(don>=1200 && don<4600){  //AND연산자를 이용한 범위설정
		tax=72+(don-1200)*(0.15);   //각 범위마다 세금%가 다르므로 그에따른 세금 계산
		income=don-tax;
		printf("세금은 %.2f원 이고 세후 소득은 %.2f원 입니다.",tax,income);
	}
	else if(don>=4600 && don<8800){
		tax=72+510+(don-4600)*(0.24);
		income=don-tax;
		printf("세금은 %.2f원 이고 세후 소득은 %.2f원 입니다.",tax,income);
	}
	else if(don>=8800 && don<15000){
		tax=72+510+1008+(don-8800)*(0.36);
		income=don-tax;
		printf("세금은 %.2f원 이고 세후 소득은 %.2f원 입니다.",tax,income);
	}
	else {
		tax=72+510+1008+2170+(don-15000)*(0.38);
		income=don-tax;
		printf("세금은 %.2f원 이고 세후 소득은 %.2f원 입니다.",tax,income);
	}

	getchar();
	getchar();
}