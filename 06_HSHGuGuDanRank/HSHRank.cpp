#include "HSHPlayer.h"
const int NumTopPlayer = 10;

void printRanking( FILE *fp=stdout);  //

static CHSHPlayer list[NumTopPlayer];  //static 변수를 이용해 초기화를 하지 않음
static int nTopPlayer;

void loadRanking( char *filename)  //랭킹 불러오기
{
	nTopPlayer = 0;  // 현재 내가 몇개의 순위갯수를 가지고있는지
	FILE *fp = fopen(filename , "r");  //파일 읽기
	if(fp == NULL) return;
	fscanf(fp, "%d", &nTopPlayer);  //nTopPlayer은 지금까지 저장된 인원수
	if(nTopPlayer > NumTopPlayer)   //NumTopPlayer은 최대인원수
		nTopPlayer = NumTopPlayer;

	for (int i= 0; i<nTopPlayer ; i++)
		list[i].read(fp);

	fclose(fp);  //파일종료
} 

void storeRanking(char *filename)  // 랭킹내용 저장하는 함수
{
	FILE *fp = fopen(filename , "w");  // 파일에 새로 쓰기
	if( fp ==NULL) return;  // 에러가 있는파일 대비
	fprintf(fp, "%d\n", nTopPlayer);  //맨위에 숫자 넣기
	printRanking(fp);  //랭킹을 txt파일에 저장
	fclose(fp);  // 파일 종료
}
void printRanking(FILE *fp)   // 콘솔창에 랭킹표시
{
	for (int i=0; i<nTopPlayer ; i++) {
		fprintf(fp, "                  %2d:\t", i+1);
		list[i].print(fp);
	}
}

void addRanking ( char* name, double spg)   //10위이내에 속하면 랭킹에 등록하는 함수
{
	int pos=0;
	for ( pos ; pos<nTopPlayer ; pos++)
		if( spg < list[pos].getScore() )
			break;

	if( pos>= NumTopPlayer)  //10위 밖이면 return
		return;

	if( nTopPlayer < NumTopPlayer)
		nTopPlayer++;

	for( int i=nTopPlayer-1 ; i>pos ; i--) {   // 순위에서 중간에 하나가 끼면 뒤로 한칸씩 밀어주기
		list[i] = list[i-1];
	}
	list[pos].set(name, spg);
}