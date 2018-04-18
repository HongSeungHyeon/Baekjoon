#pragma once
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

class Complex
{
	double real;
	double imag;
	static int count;

public:

	Complex(double r=0.0, double i=0.0) : real(r), imag(i) { 
		printf("  ����Ʈ������\n");
		count++;
		Complex::printCount();
	}
	Complex(Complex& v) : real(v.real), imag(v.imag) { 
		printf("  ���������\n");
		count++;
		Complex::printCount();
	}
	~Complex(void) { 
		printf("  �Ҹ���\n");
		count--;
		Complex::printCount();
	};

	static int getCount() { return count; }
	static void printCount() {
		printf("  ���� ���Ҽ� ��ü�� �� = %d\n", count);
	}

	void set( double r,	double i) {						//������� ������
		real = r;
		imag = i;		
	}
	void read( char* msg = " ���Ҽ� �Է� = ") {			//���Ҽ� �Է�
		printf(" %s ", msg);
		scanf("%lf%lf", &real, &imag);
	}
	void print( char* msg = " ���Ҽ� = ") {				//��ü�� �����ͺ��� ���� ����ϴ� �Լ�
		printf("\t%s", msg);							//����Ʈ�Ű������� ���
		if (real>0.0) printf(" +%3.2lf", real);			//�Ǽ��ΰ� 0���� Ŭ ��
		else if (real<0.0) printf(" -%3.2lf", -real);	//�Ǽ��ΰ� 0���� ���� ��
		if (real == 0 && imag == 0)						//�Ǽ��� ����� ��� 0�� ��
			printf("  0.00");
		if (imag>0.0) printf(" +%3.2lfi", imag);		//����ΰ� 0���� Ŭ ��
		else if (imag<0.0) printf(" -%3.2lfi", -imag);	//����ΰ� 0���� ���� ��
		printf("\n");
	}

	Complex& operator= (Complex& b) {
		printf("  ���Կ�����\n");
		real = b.real;
		imag = b.imag;
		return *this;
	}
	Complex operator+ (Complex& b) {			//operator+ �����ε�
		Complex c(real+b.real, imag+b.imag);	//���ο� ��ü�� ����
		return c;								//���ο� ��ü ��ȯ
	}
	Complex add (Complex& b) {
		Complex c;		//����Ʈ ������ ����
		c.real=real+b.real;
		c.imag=imag+b.imag;
		return c;		//��������� ������ ����
	}
	void add (Complex& a, Complex& b) {
		real=a.real+b.real;
		imag=a.imag+b.imag;
	}
	Complex operator++ () {						//operator++(����) �����ε�
		Complex c(++real, ++imag);				//���ο� ��ü�� ����
		return c;									//���ο� ��ü ��ȯ
	}
	Complex operator++ (int){					//operator++(����) �����ε�
		Complex c(real++, imag++);				//���ο� ��ü�� ����
		return c;									//���ο� ��ü ��ȯ
	}
	Complex operator* (double alpha) {			//operator*(��ü*���) �����ε�
		Complex c(real*alpha, imag*alpha);		//���ο� ��ü�� ����
		return c;									//���ο� ��ü ��ȯ
	}
	friend Complex operator* (double alpha, Complex& b) {
		Complex c(alpha*b.real, alpha*b.imag);	//operator*(���*��ü) �����ε�
		return c;									//�Ϲ��Լ��� ����
	}
	Complex operator+= (Complex& b) {		//operator+= �����ε�
		Complex c(real += b.real, imag += b.imag);		
		return c;									//���ο� ��ü ����, ��ȯ
	}
	bool operator> (Complex& b) {				//operator> �����ε�
		if (this->real > b.real)						//�Ǽ��� �� ��
			return true;							
		else
			return false;
	}
	bool operator== (Complex& b) {
		if (this->real == b.real && this->imag == b.imag) 
			return true;
		else
			return false;
	}
	friend ostream& operator<< (ostream &os, const Complex &com)
	{												//operator<< �����ε�
		os << "\t" <<com.real << "+" << com.imag << "i" << " ";
		return os;									//ostream os ������
	}
};
int Complex::count=0;