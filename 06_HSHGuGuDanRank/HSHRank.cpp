#include "HSHPlayer.h"
const int NumTopPlayer = 10;

void printRanking( FILE *fp=stdout);  //

static CHSHPlayer list[NumTopPlayer];  //static ������ �̿��� �ʱ�ȭ�� ���� ����
static int nTopPlayer;

void loadRanking( char *filename)  //��ŷ �ҷ�����
{
	nTopPlayer = 0;  // ���� ���� ��� ���������� �������ִ���
	FILE *fp = fopen(filename , "r");  //���� �б�
	if(fp == NULL) return;
	fscanf(fp, "%d", &nTopPlayer);  //nTopPlayer�� ���ݱ��� ����� �ο���
	if(nTopPlayer > NumTopPlayer)   //NumTopPlayer�� �ִ��ο���
		nTopPlayer = NumTopPlayer;

	for (int i= 0; i<nTopPlayer ; i++)
		list[i].read(fp);

	fclose(fp);  //��������
} 

void storeRanking(char *filename)  // ��ŷ���� �����ϴ� �Լ�
{
	FILE *fp = fopen(filename , "w");  // ���Ͽ� ���� ����
	if( fp ==NULL) return;  // ������ �ִ����� ���
	fprintf(fp, "%d\n", nTopPlayer);  //������ ���� �ֱ�
	printRanking(fp);  //��ŷ�� txt���Ͽ� ����
	fclose(fp);  // ���� ����
}
void printRanking(FILE *fp)   // �ܼ�â�� ��ŷǥ��
{
	for (int i=0; i<nTopPlayer ; i++) {
		fprintf(fp, "                  %2d:\t", i+1);
		list[i].print(fp);
	}
}

void addRanking ( char* name, double spg)   //10���̳��� ���ϸ� ��ŷ�� ����ϴ� �Լ�
{
	int pos=0;
	for ( pos ; pos<nTopPlayer ; pos++)
		if( spg < list[pos].getScore() )
			break;

	if( pos>= NumTopPlayer)  //10�� ���̸� return
		return;

	if( nTopPlayer < NumTopPlayer)
		nTopPlayer++;

	for( int i=nTopPlayer-1 ; i>pos ; i--) {   // �������� �߰��� �ϳ��� ���� �ڷ� ��ĭ�� �о��ֱ�
		list[i] = list[i-1];
	}
	list[pos].set(name, spg);
}