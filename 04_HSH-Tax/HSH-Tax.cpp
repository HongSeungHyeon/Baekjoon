#include<stdio.h>
void main()
{
	double don=0;
	double income=0;
	double tax=0;
	printf("�ҵ��� �Է��� �ּ���(���� : ����) ===>  ");
	scanf("%lf��",&don);
	

	if(don<1200){
		tax=don*(0.06);  //���� ���
		income=don-tax;  // ���ļҵ� ���
		printf("������ %.2f�� �̰� ���� �ҵ��� %.2f�� �Դϴ�.",tax,income);   // �Ҽ��� ��°�ڸ����� ��Ÿ��
	}
	else if(don>=1200 && don<4600){  //AND�����ڸ� �̿��� ��������
		tax=72+(don-1200)*(0.15);   //�� �������� ����%�� �ٸ��Ƿ� �׿����� ���� ���
		income=don-tax;
		printf("������ %.2f�� �̰� ���� �ҵ��� %.2f�� �Դϴ�.",tax,income);
	}
	else if(don>=4600 && don<8800){
		tax=72+510+(don-4600)*(0.24);
		income=don-tax;
		printf("������ %.2f�� �̰� ���� �ҵ��� %.2f�� �Դϴ�.",tax,income);
	}
	else if(don>=8800 && don<15000){
		tax=72+510+1008+(don-8800)*(0.36);
		income=don-tax;
		printf("������ %.2f�� �̰� ���� �ҵ��� %.2f�� �Դϴ�.",tax,income);
	}
	else {
		tax=72+510+1008+2170+(don-15000)*(0.38);
		income=don-tax;
		printf("������ %.2f�� �̰� ���� �ҵ��� %.2f�� �Դϴ�.",tax,income);
	}

	getchar();
	getchar();
}