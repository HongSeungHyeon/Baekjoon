#pragma once
#include <stdio.h>
#include <string.h>

class CHSHPlayer
{
	private:    // �ܺο��� ���ٺҰ�
	double score;
	char name[80];
public:

	CHSHPlayer(void){}
	~CHSHPlayer(void){}

	double getScore() { return score;} //
	void set(char* na, double scr) {
		score = scr;
		strcpy(name, na);  //name �� na�� ��������
	}

	void print(FILE *fp=stdout) {    //�ܼ�â�� ǥ��
		fprintf(fp, "%5.3f\t %s\n", score, name);   // ������ �̸� ���
	}
	void read(FILE *fp) {  // ������ ������ �о�´�.
		char str[50];
		fscanf(fp, "%s%lf%s", str, &score, name);  // ����, ����, �̸��� �о�´�.�Ѵ�.
	}
};

