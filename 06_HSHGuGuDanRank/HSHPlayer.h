#pragma once
#include <stdio.h>
#include <string.h>

class CHSHPlayer
{
	private:    // 외부에서 접근불가
	double score;
	char name[80];
public:

	CHSHPlayer(void){}
	~CHSHPlayer(void){}

	double getScore() { return score;} //
	void set(char* na, double scr) {
		score = scr;
		strcpy(name, na);  //name 과 na가 같도록함
	}

	void print(FILE *fp=stdout) {    //콘솔창에 표시
		fprintf(fp, "%5.3f\t %s\n", score, name);   // 점수와 이름 출력
	}
	void read(FILE *fp) {  // 파일의 내용을 읽어온다.
		char str[50];
		fscanf(fp, "%s%lf%s", str, &score, name);  // 순위, 점수, 이름을 읽어온다.한다.
	}
};

